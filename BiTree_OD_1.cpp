#include"iostream"
#include <cstddef>
using namespace std;
typedef struct BiTNode{
    char data;
    struct BiTNode *lchild,*rchild;
}BiTNode,*BiTree;
void PreCreateBiTree(BiTree &T){
    char temp;
    cin>>temp;
    if(temp=='#') T=NULL;
    else{
        T=new BiTNode;
        T->data=temp;
        PreCreateBiTree(T->lchild);
        PreCreateBiTree(T->rchild);
    }
}
//统计树中度为1的节点
void BiTree_OD_1(BiTree T,int &ans){
    if(T){
        if((T->lchild!=NULL&&T->rchild==NULL)||(T->lchild==NULL&&T->rchild!=NULL)) ans++;
        BiTree_OD_1(T->lchild, ans);
        BiTree_OD_1(T->rchild, ans);
    }
}
//递归先序遍历
void PreOrder(BiTree T){
    if(T){
        cout<<T->data<<" ";
        PreOrder(T->lchild);
        PreOrder(T->rchild);
    }
}
int main(){
    BiTree T;
    PreCreateBiTree(T);
    PreOrder(T);
    int OD_1=0;
    BiTree_OD_1(T, OD_1);
    cout<<OD_1<<endl;
    return 0;
}