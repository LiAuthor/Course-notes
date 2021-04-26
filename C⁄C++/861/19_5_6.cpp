#include<iostream>
using namespace std;
typedef struct BiTNode{
    int data;
    struct BiTNode *lchild,*rchild;
}BiTNode,*BiTree;
/*
typedef struct BiTNode{
    char data;
    struct BiTNode *lchild,*rchild;
}BiTNode,*BiTree;
*/
//先序创建树
void PreCreateBiTree(BiTree &T){
    //char temp;
    int temp;
    cin>>temp;
    if(temp==-1) T=NULL;
    else{
        T=new BiTNode;
        T->data=temp;
        PreCreateBiTree(T->lchild);
        PreCreateBiTree(T->rchild);
    }
}
//统计值为x的节点个数
void Count_X(BiTree T,char x,int &ans){
    if(T){
        if(T->data==x) ans+=1;
        Count_X(T->lchild, x,ans);
        Count_X(T->rchild, x,ans);
    }
}
//查找小于二叉排序树根节点值的最大值节点
void Search(BiTree T,int &ans){
    if(!T->lchild) ans=0;
    else{
        T=T->lchild;
        if(!T->rchild) ans=T->data;
        else{
            while(T->rchild) T=T->rchild;
            ans=T->data;
        }
    }
}
int main(){
    BiTree T;
    PreCreateBiTree(T);
    int ans=-1;
    /*
    char x='b';
    Count_X(T, x, ans);
    cout<<ans<<endl;
    */
    Search(T, ans);
    cout<<ans<<endl;
    return 0;
}