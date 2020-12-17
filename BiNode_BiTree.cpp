#include<iostream>
#include <stack>
using namespace std;
typedef struct BiTNode{
    char data;
    struct BiTNode *lchild,*rchild;
}BiTNode,*BiTree;
//先序创建二叉树
void createBiTree(BiTree &T)
{
	char c;
	cin >> c;
	if('#' == c)
		T = NULL;
	else{
		T = new BiTNode;
		T->data = c;
		createBiTree(T->lchild);
		createBiTree(T->rchild);
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
//递归中序遍历
void InOrder(BiTree T){
    if(T){
        InOrder(T->lchild);
        cout<<T->data<<" ";
        InOrder(T->rchild);
    }
}
//递归后序遍历
void PostOrder(BiTree T){
    if(T){
        PostOrder(T->lchild);
        PostOrder(T->rchild);
        cout<<T->data<<" ";
    }
}
//非递归中序
void InOrder_2(BiTree &T){
    stack<BiTree> S;
    BiTree p=T;
    while (p||S.size()!=0) {
        if(p){
            S.push(p);
            p=p->lchild;
        }
        else{
            S.pop();
            cout<<p->data<<" ";
            p=p->rchild;
        }
    }
}
void change_test(BiTree T){
    T->lchild->data='T';
}
int main(){
    BiTNode *T;
    createBiTree(T);
    change_test(T);
    cout<<endl;
    PreOrder(T);
    cout<<endl;
    InOrder(T);
    cout<<endl;
    PostOrder(T);
    cout<<endl;
    //InOrder_2(T);
    return 0;
}