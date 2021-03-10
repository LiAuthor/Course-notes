#include<stdio.h>
#include<math.h>
int main()
{
long n,m,r;
while(scanf("%ld%ld",&n,&r)!=EOF)
{
if(abs(r)>1&&!(n<0&&r>0))
{
long result[100];
long*p=result;
printf("%ld=",n);
if(n!=0)
{
while(n!=0)
{
m=n/r;*p=n-m*r;
if(*p<0&&r<0)
{
*p=*p+abs(r);m++;
}
p++;n=m;
}
for(m=p-result-1;m>=0;m--)
{
if(result[m]>9)
printf("%c",55+result[m]);
else
printf("%d",result[m]);
}
}
else printf("0");
printf("(base%d)\n",r);
}
}
return 0;
}
