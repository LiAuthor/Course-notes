#include"iostream"
using namespace std;
typedef struct LNode{
    int data;
    struct LNode *next;
}LNode,*LinkList;
//尾插法
LinkList List_TailInsert(LinkList &L){
    int x;
    L=new LNode;
    LNode *s,*r=L;
    cin>>x;
    while(x!=1000){
        s=new LNode;
        s->data=x;
        r->next=s;
        r=s;
        cin>>x;
    }
    return L;
}
//头插法重新建表
LinkList Reverse_1(LinkList &L){
    LinkList p=L->next,r;
    L->next=NULL;
    while(p){
        r=p->next;
        p->next=L->next;
        L->next=p;
        p=r;
    }
    return L;
}
//指针反转
LinkList Reverse_2(LinkList &L){
    LinkList pre,p=L->next,r=p->next;
    p->next=NULL;
    while(r){
        pre=p;
        p=r;
        r=r->next;
        p->next=pre;
    }
    L->next=p;//头指针与最后一个节点相连
    return L;
}
int main(){
    LinkList L;
    List_TailInsert(L);
    //L=Reverse_1(L);
    L=Reverse_2(L);
    LinkList p=L->next;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
    return 0;
}