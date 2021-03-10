#define N 5
#include "stdio.h"
struct student { int num;
  int score;
};
struct student s[N],temp;
void input()
{  int i;
   for(i=0;i<N;i++)
   {
    printf("Enter number:");
    scanf("%d",&s[i].num);
    printf("Enter score:");
    scanf("%d",&s[i].score);
   }
}
void output()
{ int i;
  for(i=0;i<N;i++)
  {
    printf("num=%d\n,score=%d\n",s[i].num,s[i].score);
  }
}
void main()
{ 
  void input();
  void output();
  int i,j,b;
  input();
  for(i=0;i<N;i++)
  {
     for(j=i+1;j<N;j++)
   if(s[i].score>s[j].score)
   {temp=s[i];
    s[i]=s[j];
    s[j]=temp;
   }
  }
  output();
}
