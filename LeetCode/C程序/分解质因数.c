#include <stdio.h>
int main()
{
    int x,n,i;
    scanf("%d",&x);
    printf("%d=",x);
    for(i=2;x>i;i++){
        n=x%i;
        if(n==0){
            x=x/i;
            printf("%d*",i);
			i=i-1;
        }
    }
    if(x==i){
            printf("%d",i);
        }
    return 0;
}
