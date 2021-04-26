/*有序排列的线性表中存在相同元素，找出重复元素重复次数最多的一个，用参数返回最大重复次数及该元素值*/
#include"iostream"
using namespace std;
#define MAXSIZE 100
typedef struct{
    int *elem;
    int length;
    int listsize;
}SqList;
void FindMax(SqList L,int &ans_max,int &ans_elem){
    int ans_max_temp=0,i=1;
    ans_max=1;
    ans_elem=L.elem[0];
    for(i=0;i<L.length;i++){
        while(L.elem[i]==L.elem[i+1]){
            ans_max_temp+=1;
            i+=1;
        }
        if(ans_max<=ans_max_temp){
            ans_max=ans_max_temp;
            ans_elem=L.elem[i];
        }
        ans_max_temp=0;
    }
}
bool InitList(SqList &L){
    L.elem=new int[MAXSIZE];
    if(!L.elem) return false;
    L.length=0;
    return true;
}
int main(){
    SqList L;
    int x,ans_elem,ans_max;
    InitList(L);
    for(int i=0;i<12;i++){
        cin>>x;
        L.elem[i]=x;
    }
    L.length=12;
    FindMax(L,ans_max,ans_elem);
    cout<<ans_max<<" "<<ans_elem<<endl;
    return 0;
}