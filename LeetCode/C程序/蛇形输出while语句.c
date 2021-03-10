#include <stdio.h>  
int main()  
{  
    int n,a[101][101]={0},x,y,c=0;
	printf("请输入宽度；\n");  
    scanf("%d",&n);  
    x=0;
	y=n-1;  
    a[x][y]=1;
	c=1;  
    while (c<n*n) 
    {  
        /*while (x+1<n)  
            a[++x][y]=++c;  
        while (y-1>=0)  
            a[x][--y]=++c;  
        while (x-1>=0)  
            a[--x][y]=++c;  
        while (y+1<n)  
            a[x][++y]=++c;*/
			
			
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
