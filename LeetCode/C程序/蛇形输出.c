#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,x;
	int cnt=1;
	printf("请输入数组宽度：\n");
	scanf("%d",&x);
	
/*	int **array;
    array=(int**)malloc(sizeof(int*)*x);
    for(i=0;i<x;++i)
	{
        array[i]=(int*)malloc(sizeof(int)*x);
    }
	   
    for (i=0;i<x;++i)
	{
        for (j=0;j<x;++j)
		{
            printf ("%5d",array[i][j]);
        }
        printf ("\n");
    }
    
    for (i=0;i<x;++i)
	{
        free(array[i]);
    }
    free(array);*/
    
    i=x;j=x;
    int array[i][j];
    for(j=x;j>0;j--)
    {
    	for(i=0;i<x;++i)
    	{
    		array[i][j]=cnt;
    		cnt++;
    		if(i=j&&i+j==x)
    		{
    			for()
    		}
    	}
    }
     for (i=0;i<x;++i)
	{
        for (j=0;j<x;++j)
		{
            printf ("%3d",array[i][j]);
        }
        printf ("\n");
    }
    return 0;
}
