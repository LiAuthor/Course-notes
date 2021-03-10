#include <stdio.h>  
int main()  
{  
    int n,a[101][101]={0},x,y,c=0;
	printf("请输入宽度；\n");  
    scanf("%d",&n);  
    x=0;y=n-1;  
    c=a[x][y]=1;  
    while (c<n*n)//最大数为n*n  
    {  
        while (x+1<n&&!a[x+1][y])//向下  
            a[++x][y]=++c;  
        while (y-1>=0&&!a[x][y-1])//向左  
            a[x][--y]=++c;  
        while (x-1>=0&&!a[x-1][y])//向上  
            a[--x][y]=++c;  
        while (y+1<n&&!a[x][y+1])//向右  
            a[x][++y]=++c;  
    }     
    for (x=0;x<n;x++)  
    {  
        for (y=0;y<n;y++)
        {
          printf("%4d ",a[x][y]);
	    }
    printf("\n");
    }
    return 0;
} 
/*#include <stdio.h>  
int main()  
{  
    int n,a[10][10]={0},i=1,j,x=1,y=0,t,c=1;  
    a[0][0]=1;
	printf("请输入宽度；\n");  
    scanf("%d",&n);//行数  
    while (i<n)   //i从第2行开始  
    {  
        x=i;y=0;  
        while (y<i||y==i)    
        {  
            a[x--][y++]=++c;  
        }  
        i++;  
    }  
    for (i=0;i<n;i++)  
    {  
        for(j=0;j<n-i;j++)  
            printf("%5d",a[i][j]);  
        printf("\n");  
    }
	return 0;  
}   */
