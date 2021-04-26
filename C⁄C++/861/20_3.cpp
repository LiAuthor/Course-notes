/*删除带头单链表L中数据域小于max，大于min的所有节点，并释放其所占空间*/
#include"iostream"
using namespace std;
typedef struct LNode{
    int data;
    struct LNode *next;
}LNode,*LinkList;
//HeadInsert make L
LinkList HeadInsert(LinkList &L){
    LNode *p;
    int x;
    L=new LNode;//HeadNode
    L->next=NULL;
    cin>>x;
    while(x!=1000){
        p=new LNode;
        p->data=x;
        p->next=L->next;
        L->next=p;
        cin>>x;
    }
    return L;
}
LinkList DelMaxMin(LinkList &L,int max,int min){
    if(L->next==NULL) return L;
    LinkList r=L,s=L->next,t;
    while(s){
        if(s->data<max&&s->data>min){
            r->next=s->next;
            t=s;
            s=s->next;
            free(t);
        }
        else{
            r=s;
            s=s->next;
        }
    }
    return L;
}
int main(){
    LinkList L;
    HeadInsert(L);
    DelMaxMin(L, 8, 1);
    LinkList p=L->next;
    while(p){
        cout<<p->data<<" ";
        p=p->next;
    }
    cout<<endl;
    return 0;
}