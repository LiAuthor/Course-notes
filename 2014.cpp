#include"iostream"
#include <cstddef>
using namespace std;
typedef struct LNode{
    int data;
    struct LNode *next;
}LNode,*LinkList;
//头插法
LinkList List_HeadInsert(LinkList &L){
    LNode *s;
    int x;
    /*   Linklist==LNode*   */
    L=(LinkList)malloc(sizeof(LNode));//L指向新申请的头节点
    //L=(LNode*)malloc(sizeof(LNode));
    //L=new LNode;//与上2行效果相同
    L->next=NULL;
    cin>>x;
    while(x!=1000){
        //s=(LNode*)malloc(sizeof(LNode));
        s=new LNode;//与上行效果相同
        s->next=L->next;
        s->data=x;
        L->next=s;
        cin>>x;
    }
    return L;
}
//尾插法
LinkList List_TailInsert(LinkList &L){
    int x;
    L=new LNode;
    LNode *s,*r=L;
    cin>>x;
    while(x!=1000){
        s=new LNode;
        s->data=x;
        r->next=s;//r始终指向尾节点
        r=s;
        cin>>x;
    }
    r->next=L;//循环
    return L;
}
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
//2014_1 删除无序单链表值相同的多余节点
void DelsameNode(LinkList &L){
    LinkList p,q,s,t=L;
    for(p=L;p->next!=NULL;p=p->next){
        q=p->next;
        while(q){
            if(p->data==q->data){
                s=q;
                q=q->next;
                t->next=q;
                free(s);
            }
            else{
                t=q;
                q=q->next;
            }
        }
        t=p->next;
    }
}
//2014_2 查找x的双亲节点
void SearchPar(BiTree T,char elem,BiTree &ans){
    if(T){
        if(T->lchild){
            if(T->lchild->data==elem) ans=T;
            else SearchPar(T->lchild, elem,ans);
        }
        if(T->rchild){
            if(T->rchild->data==elem) ans=T;
            else SearchPar(T->rchild, elem,ans);
        }
    }
}
//2014_3 输出二叉树非叶子节点 并统计叶子节点个数
void CoutCout(BiTree T,int &num){
    if(T){
        if(!(!T->lchild&&!T->rchild)) {
            cout<<T->data<<" ";
            num++;
            CoutCout(T->lchild, num);
            CoutCout(T->rchild, num);
        }
    }
}
//2014_4 循环单链表定点插入
void InsertList(LinkList &L,int elem,int pos){
    LinkList p=L,q=L;
    int len=0;
    q=new LNode;
    q->data=elem;
    //单链表统计长度
    /*
    while(p->next){
        p=p->next;
        len+=1;
    }
    */
    //循环单链表统计长度
    while(p->next!=L){
        p=p->next;
        len+=1;
    }
    //cout<<"length: "<<len<<endl;
    if(len<pos){
       q->next=p->next;
       p->next=q;
    }else{
        p=L;
        for(int i=1;i<pos;i++){
            p=p->next;
        }
        q->next=p->next;
        p->next=q;
    }
}
//2014_5 二叉排序树中小于a的节点的个数
void CountMinA(BiTree T,char a,int &ans){
    if(T){
        CountMinA(T->lchild, a, ans);
        if(T->data<a) ans++;
        CountMinA(T->rchild, a, ans);
    }
}
int main(){
    
    LinkList L;
    //3 8 4 3 3 5 3 4 2 3
    List_TailInsert(L);
    //DelsameNode(L);
    InsertList(L, 100, 3);
    LinkList p=L->next;
    while(p!=L) {
        cout<<p->data<<" ";
        p=p->next;
    }
    /*
    int num=0;
    BiTree T;
    PreCreateBiTree(T);
    //CoutCout(T, num);
    //cout<<num;
    char elem='9';
    //BiTree ans;
    //SearchPar(T, elem,ans);
    //cout<<ans->data;
    int ans=0;
    CountMinA(T, elem, ans);
    cout<<ans;
    */
    cout<<endl;
    return 0;
}