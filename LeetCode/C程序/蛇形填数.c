/*#include<stdio.h>
#include<string.h> 
#define max 100
int a[max][max];
int main()
{
    int n,x,y,tot=0;
    scanf("%d",&n);
//for(i=0;i<n;i++)
//  {
//     for(j=0;j<n;j++)
//     a[i][j]=0;
//  }
    memset(a,0,sizeof(a));
	//将数组所有元素置零  效果同上 
    tot=a[x=0][y=n-1]=1;
    while(tot<n*n)
{
    while(x+1<n&&!a[x+1][y]) a[++x][y]=++tot;
	//!a[x][y+1]等价于 a[x][y+1]==0
    while(y-1>=0&&!a[x][y-1]) a[x][--y]=++tot;
    while(x-1>=0&&!a[x-1][y]) a[--x][y]=++tot;
    while(y+1<n&&!a[x][y+1]) a[x][++y]=++tot;   
    }   
    for(x=0;x<n;x++)
        for(y=0;y<n;y++)
            {
                printf("%3d",a[x][y]);//printf(" ");
                if(y==n-1) 
                printf("\n");

            }
    return 0;
}*/


/*#include<stdio.h>
int main()
{
int a,b,c,d,n,sum=1;
int yi[101][101];
scanf("%d",&n);
for(a=0;a<=(n-1)/2;a++)
{
for(b=a;b<=n-a-1;b++)
yi[b][n-a-1]=sum++;
for(b=n-2-a;b>=a;b--)
yi[n-a-1][b]=sum++;
for(b=n-a-2;b>=a;b--)
yi[b][a]=sum++;
for(b=a+1;b<n-a-1;b++)
yi[a][b]=sum++;
}
for(c=0;c<n;c++)
{
for(d=0;d<n;d++)
printf("%3d ",yi[c][d]);
printf("\n");
}
}*/


#include<stdio.h>
#define max 1000
int a[max][max];
int main()
{
    //int N;
    //scanf("%d",&N);
    while(1)
    {
        int n,x,y,tot;
        scanf("%d",&n);
        tot=a[0][0]=1;x=0;y=0;
        while(tot<(n+1)*n/2)//注意不是tot<n*n/2 
        {
            while(y+1<n&&!a[x][y+1]) a[x][++y]=++tot;
			//不需要将要填充的三角区域的元素全部置零
            while(x+1<n&&y-1>=0&&!a[x+1][y-1]) a[++x][--y]=++tot;
            while(x-1>=0&&!a[x-1][y]) a[--x][y]=++tot;
        }
        for(x=0;x<n;x++)
        {
            for(y=0;y<n;y++)
            {
                if(a[x][y]) 
				{
				 printf("%3d",a[x][y]);
                 a[x][y]=0;
				}//无此句将不能输出最后一组的结果
            }
            printf("\n");
        }
    } 
    return 0;
}
