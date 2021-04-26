#include"iostream"
using namespace std;
#define MAXSIZE 100
typedef struct{
    int *data;
    int listsize=MAXSIZE;//开辟空间的长度 申请时便确定
    int length=0;//实际存放元素个数 在增加删除元素的过程动态变化
}Seqlist;
void DelSameX(Seqlist &L,int x){
    
    int i=0;
    while(i<L.length){
        if(L.data[i]==x){
            for(int j=i;j<L.length-1;j++){
                L.data[j]=L.data[j+1];   
            }
            L.length-=1;
        }
        else i+=1;
    }
    /*
    for(int i=0;i<L->length;i++){
        if(L->data[i]==x){
            for(int j=i;j<L->length-1;j++) 
                L->data[j]=L->data[j+1];
            L->length-=1;
            i-=1;
        }
    }
    */
}
int main(){
    //动态测试
    Seqlist L_2;
    L_2.data=new int[MAXSIZE];
    //赋值
    int temp;
    for(int i=0;i<10;i++){
        cin>>temp;//3 8 3 4 3 3 6 9 3 1
        L_2.data[i]=temp;
        L_2.length+=1;
    }
    int test=3;
    DelSameX(L_2, test);
    for(int i=0;i<L_2.length;i++){
        cout<<L_2.data[i]<<" ";
    }
    cout<<endl;
    return 0;
}