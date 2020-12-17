#include"iostream"
#include <cstddef>
#include <cstdlib>
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
    return L;
}
void mearge(LinkList &a,LinkList &b){
    LinkList p=a;
    while(p->next) p=p->next;
    p->next=b->next;
    b=a;
}
int main(){
    LinkList ha,hb;
    List_TailInsert(ha);
    List_TailInsert(hb);
    mearge(ha, hb);
    LinkList p1=ha->next,p2=ha->next;
    while(p1!=NULL){
        cout<<p1->data<<" ";
        p1=p1->next;
    }
    cout<<endl;
    while(p2!=NULL){
        cout<<p2->data<<" ";
        p2=p2->next;
    }
    cout<<endl;
    return 0;
}