/*
树算法高频：
统计叶子节点个数、度为1节点个数、度为2节点个数、全部节点个数
查找值为x的节点、求树的深度、复制二叉树
*/
#include<iostream>
using namespace std;
typedef struct BiTNode{
    char data;
    struct BiTNode *lchild,*rchild;
}BiTNode,*BiTree;
//先序创建树
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
void PCB(BiTree &T){
    char temp;
    cin>>temp;
    if(temp=='#') T=NULL;
    else{
        T=new BiTNode; 
        T->data=temp;
        PCB(T->lchild);
        PCB(T->rchild);
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
//统计树中叶子节点个数
int CountLeaf(BiTree T){
    if(T==NULL) return 0;
    else{
        if(T->lchild==NULL&&T->rchild==NULL)
        return 1;
        else return CountLeaf(T->lchild)+CountLeaf(T->rchild);
    }
}
//统计树中度为1的节点个数
int CountOD_1(BiTree T){
    if(T==NULL) return 0;
    else{
        if(T->lchild==NULL&&T->rchild!=NULL)
            return CountOD_1(T->rchild)+1;
        else if(T->lchild!=NULL&&T->rchild==NULL)
            return CountOD_1(T->lchild)+1;
        else return CountOD_1(T->lchild)+CountOD_1(T->rchild);
    }
}
int Count_OD_1(BiTree T){
    if(T==NULL) return 0;
    else{
        if((T->lchild==NULL&&T->rchild!=NULL)||(T->lchild!=NULL&&T->rchild==NULL))
            return 1+Count_OD_1(T->lchild)+Count_OD_1(T->rchild);
        else return Count_OD_1(T->rchild)+Count_OD_1(T->lchild);
    }
}
void CountOD_1(BiTree T,int &n){
    if(T){
        if((T->lchild==NULL&&T->rchild!=NULL)||(T->lchild!=NULL&&T->rchild==NULL)) n+=1;
        CountOD_1(T->lchild, n);
        CountOD_1(T->rchild,n);
    }
}
//统计树中度为2的节点个数
void CountOD_2(BiTree T,int &n){
    if(T){
        if(T->rchild!=NULL&&T->lchild!=NULL) n+=1;
        CountOD_2(T->lchild,n);
        CountOD_2(T->rchild, n);
    }
}
//统计树中所有节点
int CountAll(BiTree T){
    if(T==NULL) return 0;
    else return CountAll(T->lchild)+CountAll(T->rchild)+1;
}
//查找树中值为x的节点，返回其指针
void search(BiTree T,BiTree &ans,char x){
    if(T){
        if(T->data==x) ans=T;
        else{
            search(T->lchild, ans, x);
            search(T->rchild, ans, x);
        }
    }
}
//这个函数还有问题
BiTree FindNode(BiTree T,char x){
    BiTree p;
    if(T==NULL) return NULL;
    else if(T->data==x) return T;
    else{
        p=FindNode(T->lchild,x);
        if(p==NULL) return FindNode(p->rchild,x);
        return p;
    }
    return NULL;
}
//求树的深度
int Depth(BiTree T){
    int lchilddepth=0,rchilddepth=0;
    if(T==NULL) return 0;
    else{
        lchilddepth=Depth(T->lchild);
        rchilddepth=Depth(T->rchild);
        return (lchilddepth>rchilddepth?lchilddepth:rchilddepth)+1;
        
    }
}
//复制二叉树
void CopyNew(BiTree T,BiTree &NewTree){
    if(T==NULL) {
        NewTree=NULL;
        //return;
    }
    else{
        NewTree=new BiTNode;
        NewTree->data=T->data;
        CopyNew(T->lchild,NewTree->lchild);
        CopyNew(T->rchild,NewTree->rchild);
    }
}
//寻找x的双亲节点
void SearchPar(BiTree T,char x,BiTree &ans){
    if(T->rchild||T->lchild){
        if(T->lchild->data==x||T->rchild->data==x) ans= T;
        else{
            SearchPar(T->lchild, x,ans);
            SearchPar(T->rchild, x,ans);
        }
    }
}

int main(){
    BiTree T;
    PreCreateBiTree(T);
    PreOrder(T);
    cout<<endl;
    //测试叶子节点个数函数
    cout<<"叶子节点个数: "<<CountLeaf(T)<<endl;
    //测试度为1节点个数
    int n_1=0;
    CountOD_1(T,n_1);
    cout<<"度为1节点个数: "<<n_1<<endl;
    cout<<"度为1节点个数: "<<CountOD_1(T)<<endl;
    cout<<"度为1节点个数: "<<Count_OD_1(T)<<endl;
    //测试度为2节点个数
    int n_2=0;
    CountOD_2(T,n_2);
    cout<<"度为2节点个数: "<<n_2<<endl;
    //测试所有节点个数
    cout<<"节点总个数: "<<CountAll(T)<<endl;
    //测试树的深度函数
    cout<<"树的深度： "<<Depth(T)<<endl;
    //测试复制树函数
    BiTree NewT;
    CopyNew(T, NewT);
    cout<<"New Tree: ";
    PreOrder(NewT);
    cout<<endl;
    //测试查找值为test的节点函数
    char test='J';
    //BiTree ans=FindNode(T, test);
    BiTree ans=NULL;
    search(T, ans, test);
    if(ans!=NULL)
        cout<<"Find Node： "<<ans->data<<endl;
    else cout<<"No this Node"<<endl;
    return 0;
}

/*
int main(){
    BiTree T,ans;
    PreCreateBiTree(T);
    PreOrder(T);
    cout<<endl;
    char x='5';
    SearchPar(T, x,ans);
    //cout<<"found"<<ans->data<<endl;
    return 0;
}
*/