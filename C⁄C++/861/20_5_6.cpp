/*孩子兄弟链表示的树，统计叶子节点个数*/
#include"iostream"
#include <cstddef>
using namespace std;

typedef struct CSNode{
    char data;
    struct CSNode *firstchild,*nextsibling;
}CSNode,*CSTree;
typedef struct BiTNode{
    char data;
    struct BiTNode *lchild,*rchild;
}BiTNode,*BiTree;
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
//二叉排序树根节点第一个后继节点
BiTree TailNode(BiTree T){
    BiTree ans,p;
    if(T->rchild==NULL) ans=NULL;
    else{
        p=T->rchild;
        while(p->lchild) p=p->lchild;
        ans=p;
    }
    return ans;
}
void CreateBiTree(CSTree &T)
{
	char c;
	cin >> c;
	if('#' == c)
		T = NULL;
	else{
		T = new CSNode;
		T->data = c;
		CreateBiTree(T->firstchild);
		CreateBiTree(T->nextsibling);
	}
}
//原树的叶子节点
int LeafCount(CSTree T){
    if(T){
        if(T->firstchild==NULL&&T->nextsibling==NULL) return 1;
        else if (T->firstchild==NULL&&T->nextsibling) return 1+LeafCount(T->nextsibling);//易错处
        else return LeafCount(T->firstchild)+LeafCount(T->nextsibling);
    }
    else return 0;
}
void LeafCount_2(CSTree T,int &ans){
    if(T){
        if(!T->firstchild&&!T->nextsibling) {
            ans++;
            //cout<<T->data<<" ";
        }
        else if(!T->firstchild&&T->nextsibling){
            ans++;
            //cout<<T->data<<" ";  
            LeafCount_2(T->nextsibling, ans);          
        }
        else{
            LeafCount_2(T->firstchild, ans);
            LeafCount_2(T->nextsibling, ans);
        }
    }
}
//该二叉树的叶子节点
int LeafCount_1(CSTree T){
    if(T==NULL) return 0;
    else if(T->firstchild==NULL&&T->nextsibling==NULL) return 1;
    else return LeafCount_1(T->firstchild)+LeafCount_1(T->nextsibling);
}
/*
int main(){
    CSTree T;
    int ans=0;
    CreateBiTree(T);
    cout<<LeafCount(T)<<endl;
    cout<<LeafCount_1(T)<<endl;
    LeafCount_2(T, ans);
    cout<<ans<<endl;
    return 0;
}
*/
int main(){
    BiTree T,ans;
    createBiTree(T);
    ans=TailNode(T);
    cout<<ans->data<<endl;
    return 0;
}