#include<stdio.h>
int main()
{
int i,j,a[7][7];
for(i=0;i<=6;i++)
   for(j=0;j<=6;j++)
   {
      a[i][0]=1;
      a[i][i]=1;//嵌套循环使最左端和最斜右端为零 
   }
    for(i=2;i<=6;i++)
    { 
       for(j=1;j<=i-1;j++)
       { 
          a[i][j]=a[i-1][j-1]+a[i-1][j];
       } 
    } 
    for(i=0;i<=6;i++)//循环遍历输出 
	{
       for(j=0;j<=i;j++)
       printf("%3d",a[i][j]);
       printf("\n");
    }
    return 0;
}
