#include"stdio.h"
#include"math.h"
int main(){
    int n;
    double a,sum=0.0,prev=0.0;
    scanf("%lf %d",&a,&n);
    for(int i=0;i<n;i++){
        prev+=a*pow(10,i);
        sum+=prev;
    }
    printf("%lf\n",sum);
    return 0;
}