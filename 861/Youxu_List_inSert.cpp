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
void inSertList(LinkList L,int x){
    LinkList p=L->next,s;
    while(p){
        if(p->data>=x) break;
        p=p->next;
    }
    s=new LNode;
    s->data=p->data;
    p->data=x;
    s->next=p->next;
    p->next=s;
}
int main(){
    LinkList L;
    List_TailInsert(L);
    inSertList(L,4);
    LinkList p=L->next;
    while(p!=NULL){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
    return 0;
}