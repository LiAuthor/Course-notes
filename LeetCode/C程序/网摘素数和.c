#include <stdio.h>
#include <stdlib.h>
/*
我们认为2是第一个素数，3是第二个素数，5是第三个素数，依次类推。
现在，给定两个整数n和m，0<n<=m<=200，
你的程序要计算第n个素数到第m个素数之间所有的素数的和，包括第n个素数和第m个素数。
比如: n=2,m=4,则 sum = 15;
    1. 找到 前200个素数
    2. 从前200个素数中找到 [n,m]之间的素数，并求和

*/
int main(void)
{
    const int LENTH = 200;
    int cnt = 0;
    int x = 2; // +1 to find prime
    //int prime_arr[200];
    int *prime_arr = (int*)calloc(LENTH,sizeof(int));
    int *t_prime = prime_arr;
    while(cnt<LENTH)
    {
        int isPrime = 1;
        for(int i=2; i<x; i++)
        {
            if(x%i==0)
            {
                isPrime = 0;
                break;
            }
        }
        if(isPrime)
        {

            // x++;
            *prime_arr = x;
           // printf("prime x = %d ,*prime_arr =  %d\n",x,*prime_arr); // ok
            prime_arr++;
            cnt++;
            // printf("prime x = %d ,*prime_arr =  %d\n",x,*prime_arr);
            // 2,0 ?why??? because prime_arr has do ++ !!!
        }
        else
        {
            // printf("%d is not a prime\n",x);
        }
        x++;
    }
    // first 200 prime is
    printf("first %d prime numbers are:\n",LENTH);
    prime_arr = t_prime;
    for(int i=0;i<LENTH;i++){
        printf("%d ",prime_arr[i]);
    }
    printf("\n");
    int n,m;
    int sum = 0;
    // -- > index range[n-1,m-1]
    n = 2, m = 4;
    printf("please input n m (0<n<m<=200):\n");
    scanf("%d %d",&n,&m);
    // 0<n<m<=200
    if(n<=0 || m>200){
        printf("n,m should as 0<n<m<=200, but n=%d,m=%d now!\n",n,m);
    }
    for(int i=0;i<LENTH;i++){
        if(i>=n-1 && i <=m-1){
            sum += prime_arr[i];
        }
    }
    printf("%d , %d sum = %d",n,m,sum);
    free(prime_arr);
    // calculate one number is a prime ?
    return 0;
}
