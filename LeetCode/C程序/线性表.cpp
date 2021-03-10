#include <iostream>  
using namespace std;   
#define LIST_INIT_SIZE 100 //初始化分配量   
#define LISTINCREMENT 10 //存储空间的分配增量   
 
typedef int Status;  
  
typedef int ElemType;  
  
typedef struct{  
  
    ElemType *elem;//储存空间基址  
  
    int length;//当前长度  
  
    int listsize;//当前的分配的存储容量 （以sizeof (ElemType)为单位)  
}SqList;  
  
Status InitList_sq(SqList &L,int n){  
  
    L.elem = (ElemType *)malloc(LIST_INIT_SIZE *sizeof(ElemType));  
  
    if ( !L.elem)exit(1);//存储分配失败  
  
    L.length = 0; //空表长度为0  
  
    L.listsize =LIST_INIT_SIZE;//初始储存容量  
  
    cout << "请输入表中的数据" <<endl;  
  
  
  
    for ( int i = 0; i < n ; i ++)  
    {  
          
            cin >> L.elem[i];  
            ++L.length;  
   
            if(L.length>=L.listsize)  
  
            {  
  
            ElemType *newbase=(ElemType*)realloc(L.elem,(L.listsize+LISTINCREMENT)*sizeof(ElemType));  
    
                if(!newbase)  
  
                    exit(0);  
   
                L.elem=newbase;  
    
                L.listsize+=LISTINCREMENT;  
  
            }  
  }  
    return true;  
}  
  
  
Status ListInsert_Sq(SqList &L,int i,ElemType e)      
{      
    //在顺序线性表L中第i个位置之前插入新的元素e        
    //i的合法值为1<=i<=ListLength_Sq(L)+1        
    if(i <1 || i> L.length + 1)      
        return false;   //i值不合法        
    if(L.length >= L.listsize)   //当前存储空间已满，增加分配        
    {      
        ElemType *newbase = (ElemType *)realloc(L.elem,(L.listsize + LISTINCREMENT )* sizeof(ElemType));      
        if(!newbase)      
            exit(1);    //存储分配失败        
        L.elem = newbase;//新基址        
        L.listsize += LISTINCREMENT;    //增加存储容量        
    }      
      
    ElemType *q = &(L.elem[i-1]);//q为插入位置        
      
    for(ElemType *p = &(L.elem[L.length-1]);p>=q;--p)      
        *(p+1) = *p;    //插入位置及之后的元素右移        
      
    *q = e;     //插入e        
    ++L.length;     //表长增1     
      
    ElemType l = *q; //用一个自定义的变量 返回指针q中所指代的值  
    return l;      
}   
  
 Status display_sq(SqList &L,int n){  
  
     for ( int i = 0; i <=n ; i ++)  
     {  
         cout << L.elem[i]<<endl;  
     }  
     return true;  
 }  
      
  
int main()      
{      
    SqList L;      
    
    InitList_sq(L,5);  
      
     ListInsert_Sq (L,1,78282822);  
      
    cout <<"在首位置插入元素后，线性表变成如下表示 "<<endl;  
   
     display_sq(L,5);  
      
    return 0;  
}    
