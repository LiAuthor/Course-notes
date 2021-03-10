#include <string.h>  
#include <iostream>  
#include <algorithm>  
#include <math.h>  
#include <cstdio>  
using namespace std;  
const int MAX = 2000;  
  
struct Edge{  
    int s, e;  
    char c[50];  
}edge[MAX];  
int re[MAX], in[MAX], out[MAX], vis[MAX], n;  
  
bool cmp(const Edge a, const Edge b)  
{  
    return strcmp(a.c, b.c) < 0;  
}  
  
int judge() //最多只能有两个点的入度不等于出度，且必须是其中一个点出度恰好比入度大一（作为起点）
			//另一个点入度恰好比出度小一（作为终点）  
{  
    int ans = 0, c1 = 0, c2 = 0;  
    for(int i = 0; i < 26; i++){  
        if(abs(in[i]-out[i]) > 1) return -1;//不是欧拉图  
        else if(in[i] - out[i] == 1) c1++;  
        else if(in[i] - out[i] == -1) {c2++; ans = i;}  
    }  
    if(c1 > 1 || c2 > 1)  return -1;//不是欧拉图  
    if(c2 == 0){  
        for(int i = 0; i < 26; i++)  
            if(out[i])  return i;  
    }  
    else return ans;  
}  
  
int dfs(int u, int cnt)//u表示目前要找的某一条边的出发点，cnt表示这条边的最终的编号  
{  
    if(cnt == n)  return 1;//如果不满足cnt==n，说明还没有构成连通图，也就是没有构成欧拉图  
    for(int i = 0; i < n; i++){  
        if(u != edge[i].s || vis[i])  continue;//u为起点所对应的边在后面，继续找  
        vis[i] = 1;  
        re[cnt] = i;  
        if(dfs(edge[i].e, cnt+1))  return 1;  
        vis[i] = 0;//回溯，因为这是有向图，所以回溯很重要  
    }  
    return 0;//无法构成欧拉图  
}  
  
int main()  
{  
    int T;  
    scanf("%d", &T);  
    while(T--){  
        memset(in, 0, sizeof(in));  
        memset(out, 0, sizeof(out));  
        scanf("%d", &n);  
        for(int i = 0; i < n; i++){  
            scanf("%s", edge[i].c);  
            int len = strlen(edge[i].c);  
            edge[i].s = edge[i].c[0] - 'a';  
            edge[i].e = edge[i].c[len-1] - 'a';  
            out[edge[i].s]++;  
            in[edge[i].e]++;  
        }  
        int ok = judge();//找到起点  
        if(ok == -1){  
            printf("***\n");  
            continue;  
        }  
        sort(edge, edge+n, cmp);  
        memset(vis, 0, sizeof(vis));  
        if(!dfs(ok, 0)){  
            printf("***\n");  
            continue;  
        }  
        printf("%s", edge[re[0]].c);  
        for(int i = 1; i < n; i++)  
            printf(".%s", edge[re[i]].c);  
        printf("\n");  
    }  
    return 0;  
}  
