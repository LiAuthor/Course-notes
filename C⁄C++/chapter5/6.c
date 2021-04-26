#include"stdio.h"
int main(){
    double sum=0;//不能用 int
    for(int i=1;i<=20;i++){
        double single_sum=1;
        for(int j=i;j>0;j--){
            single_sum*=j;
        }
        sum+=single_sum;
    }
    printf("ans: %lf\n",sum);
    return 0;
}
/*
20的阶乘已经超出了int类型能过表示的数字范围，所以在代码当中使用double类型
*/