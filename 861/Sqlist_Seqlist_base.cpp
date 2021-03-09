/*该程序为顺序存储的线性表初始化，按值查找，插入，删除*/
#include"iostream"
using namespace std;
#define MAXSIZE 50
//静态分配
typedef struct{
    int data[MAXSIZE];
    int length=0;
}Sqlist;
//动态分配
typedef struct{
    int *data;
    int listsize=MAXSIZE;//开辟空间的长度 申请时便确定
    int length=0;//实际存放元素个数 在增加删除元素的过程动态变化
}Seqlist;
//创建
bool InitList(Seqlist &L){
    L.data=new int[MAXSIZE];
    if(!L.data) return false;
    L.length=0;
    return true;
}
//取值
int GetElem(Seqlist &L,int list_number){
    int ans;
    //位置合法性
    if(list_number<0||list_number>L.length) 
        return 0;//如果位置非法 如何跳出函数 无返回值?????
    //位置合法 定位输出
    ans=L.data[list_number];
    return ans;
}
//按值查找 返回位置
int LocateElem(Seqlist &L,int number){
    int i=0;
    for(;i<L.length;i++){
        if(L.data[i]==number)
        return i+1;
    }
    return 0;
}
//插入
bool ListInsert(Seqlist &L,int pos,int Insert_elememt){
    //位置是否合法
    if(pos<1||pos>L.length+1) return false;//空间未满 位置合法性
    if(pos>L.listsize) return false;//当前存储空间已满 需要重新申请空间
    //位置合法 进行插入
    for(int i=L.length;i>=pos;i--){
        L.data[i]=L.data[i-1];
    }
    L.data[pos-1]=Insert_elememt;
    L.length+=1;
    return true;
}
//删除
bool ListDelete(Seqlist &L,int pos,int &Del_element){
    //位置合法性
    if(pos<1||pos>L.length) return false;
    //位置合法 将被删除元素赋值 删除元素只需要将后续元素前移
    Del_element=L.data[pos-1];
    for(int i=pos;i<L.length;i++){
        L.data[i-1]=L.data[i];
    }
    L.length-=1;
    return true;
}
Seqlist switch_k(Seqlist &L,int k){
    int left=0,right=L.length-1,temp;
    while(left<right){
        while(L.data[left]<k&&left<right) left+=1;
        while(L.data[right]>=k&&left<right) right-=1;
        if(left==right)
            if(L.data[left]>L.data[right+1]) right+=1;
        if(left<right){
            temp=L.data[left];
            L.data[left]=L.data[right];
            L.data[right]=temp;
            left++,right--;
        }
    }
    return L;
}
int main(){
    //静态测试
    Sqlist L_1;
    //cout<<L_1.data[2]<<endl;
    //动态测试
    Seqlist L_2;
    L_2.data=new int[MAXSIZE];
    //赋值
    for(int i=0;i<10;i++){
        L_2.data[i]=20-i;
        L_2.length+=1;
    }
    int test=15;
    L_2=switch_k(L_2, test);
    //cout<<L_2.length<<endl;
    //赋值测试
    for(int i=0;i<L_2.length;i++){
        cout<<L_2.data[i]<<" ";
    }
    cout<<endl;
    cout<<L_2.length<<endl;

    /*
    //插入测试
    ListInsert(L_2, 2, 88);
    for(int i=0;i<L_2.length;i++){
        cout<<L_2.data[i]<<" ";
    }
    cout<<endl;
    cout<<L_2.length<<endl;
    //删除测试
    int ans;
    ListDelete(L_2, 2,ans);
    for(int i=0;i<L_2.length;i++){
        cout<<L_2.data[i]<<" ";
    }
    cout<<endl;
    cout<<L_2.length<<endl;
    //按值查找测试
    cout<<LocateElem(L_2, 6)<<endl;
    */
    return 0;
}