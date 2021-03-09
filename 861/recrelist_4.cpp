/*该算法实现从元素为k的位置开始反转线性表*/
#include"iostream"
using namespace std;
typedef struct{
    int elem[10];
    int length;
    int listsize;
} Sqlist;
/*从元素为k的位置开始反转线性表*/
void recrealist(Sqlist &L,int k){
    int left=0,right=9,temp;
    //找到元素为k的第一个元素下标
    while(L.elem[left]!=k) left++;
    //对应位置交换元素
    while(left<right){
        temp=L.elem[left];
        L.elem[left]=L.elem[right];
        L.elem[right]=temp;
        left++,right--;
    }
}
int main(){
    Sqlist L={2,4,5,6,7,9,12,5,1,3};
    cout<<L.length<<endl;
    recrealist(L,7);
    for(int i=0;i<10;i++){
        cout<<L.elem[i]<<" ";
    }
    cout<<endl;
    return 0;
}