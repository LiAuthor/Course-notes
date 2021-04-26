#include"iostream"
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
void YeZi(BiTree T,int &ans){
    if(T){
        if(T->lchild==NULL&&T->rchild==NULL) ans++;
        YeZi(T->lchild,ans);
        YeZi(T->rchild,ans);
    }
}
int main(){
    BiTree T;
    int ans=0;
    createBiTree(T);
    YeZi(T, ans);
    cout<<ans<<endl;
    return 0;
}