#include"stdio.h"
#include"math.h"
int main(){
    int bai,shi,ge;
    for(int i=100;i<999;i++){
        ge=i%10;
        shi=(i/10)%10;
        bai=i/100;
        if(pow(ge,3)+pow(shi,3)+pow(bai,3)==i){
            printf("%d\n",i);
        }
    }
    return 0;
}
//水仙花