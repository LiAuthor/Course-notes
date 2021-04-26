#include"stdio.h"
int main(){
int arr[10]={2,8,3,9,5,7,1,4,0,6};
    int maxPos,len=10,temp;
    for(int i=0;i<len-1;i++){
        maxPos=0;
        for(int j=1;j<len-i;j++){
            if(arr[j]>arr[maxPos]){
                maxPos=j;
            }
        }
        if (maxPos!=len-i-1){
            temp=arr[maxPos];
            arr[maxPos]=arr[len-i-1];
            arr[len-i-1]=temp;
        }
    }
    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}
//冒泡排序