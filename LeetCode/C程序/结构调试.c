#include<stdio.h>
struct Student{
	int number;
	char name[20];
	int score[3]
};
	struct Student stu[3]={{10101,"li lin",{5,4,6}},
	{10102,"li shaui",{4,5,6}},
	{10104,"li sai",{6,5,4}}};
	
int main()
{
	struct Student *p1;
	struct Student *p2;
	
	printf("Num:%d\nName:%s\nScore:%d %d %d\n",
	stu[0].number,stu[0].name,stu[0].score[0],stu[0].score[1],stu[0].score[2]);
	
	printf("Num:%d\nName:%s\nScore:%d %d %d\n",
	stu[1].number,stu[1].name,stu[1].score[0],stu[1].score[1],stu[1].score[2]);
	
	/*printf("Num:%d\nName:%s\nScore:%d %d %d",
	stu[0]->number,stu[0]->name,stu[0]->score[0],stu[0]->score[1],stu[0]->score[2]);
	结构变量必须以'.'与结构变量的成员连接，此种写法错误*/ 
	
	p2=&stu[1];
	printf("Num:%d\nName:%s\nScore:%d %d %d\n",
	stu[1].number,stu[1].name,stu[1].score[0],stu[1].score[1],stu[1].score[2]);
	printf("Num:%d\nName:%s\nScore:%d %d %d\n",
	p2->number,p2->name,p2->score[0],p2->score[1],p2->score[2]);	
	//stu[1].number等价于p2->number,依次等价 
	
	for(p1=stu;p1<stu+3;p1++)
	{
	   printf("Num:%d\nName:%s\nScore:%d %d %d\n",
	   p1->number,p1->name,p1->score[0],p1->score[1],p1->score[2]);
    }
    
    return 0;
}
