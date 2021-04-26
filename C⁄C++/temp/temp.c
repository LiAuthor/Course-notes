#include"stdio.h"
int main(){
    /*
    float x=123.456,y=0.6;
    printf("%d\n",(int)x);
    printf("%d\n",(int)(x));
    printf("%f\n",(int)x+y);
    printf("%d\n",(int)(x+y));
    
    //123
    //123
    //123.599998   why not 123.600000 ?
    //124
    */
    int k=3,w;
    w=(k++)+(k++)+(k++);
    printf("%d %d\n",w,k);
    return 0;
}