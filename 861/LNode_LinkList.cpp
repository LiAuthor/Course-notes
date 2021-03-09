/*该程序为单链表的基础：头插法，尾插法，按序号查找，按值查找，插入节点，删除节点*/
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
//按序号查找
LNode *GetElem(LinkList &L,int i){
    if(i==0) return L;
    if(i<1) return NULL;
    LNode *p=L->next;
    int j=1;
    while(p&&j<i){
        p=p->next;
        j++;
    }
    return p;
}
//按值查找
LNode *LocateElem(LinkList L,int elem){
    LNode *p=L->next;
    while(p&&p->data!=elem){
        p=p->next;
    }
    return p;
}
//插入
LinkList Insert_Node(LinkList &L,int pos){
    LNode *p=GetElem(L, pos-1);
    LNode *s;
    s=new LNode;
    cout<<"new Node data:";
    cin>>s->data;
    s->next=p->next;
    p->next=s;
    return L;
}
//删除
LNode *Del_Node(LNode *&L,int pos){
    LinkList p=GetElem(L,pos-1);
    LNode *q=p->next;
    p->next=q->next;
    free(q);
    return L;
}
/*
int main(){
    //LinkList L;
    LNode *L;//与上行效果相同
    //List_HeadInsert(L);
    List_TailInsert(L);
    //输出测试
    LinkList p=L->next;//L->next指向第一个节点 不是头节点
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
    //插入测试
    Insert_Node(L, 3);
    p=L->next;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
    //删除测试
    Del_Node(L,5);
    p=L->next;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
    return 0;
}
*/
LinkList mearge(LinkList &a,LinkList &b,int pos){
    //带头节点b插入在a的pos位置
    LinkList p=a,q=b;
    for(int i=1;i<pos;i++) p=p->next;
    while(q->next) q=q->next;
    q->next=p->next;
    p->next=b->next;
    return a;
}
int main(){
    LinkList ha,hb;
    List_TailInsert(ha);
    List_TailInsert(hb);
    int test =5;
    ha=mearge(ha, hb, test);
    LinkList p=ha->next;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
    return 0;
}