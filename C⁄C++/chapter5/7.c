#include"stdio.h"
int main(){
    double ans=0,sum1=0,sum2=0,sum3=0;
    for(int i=1;i<=100;i++){
        sum1+=i;
        if(i<=50){
            sum2+=i*i;
        }
        if(i<=10){
            sum3+=1.0/i; //这里不是1/i
        }
    }
    ans=sum1+sum2+sum3;
    printf("ans= %lf\n",ans);
    return 0;
}