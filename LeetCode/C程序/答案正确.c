#include<stdio.h>
#include<string.h>//该程序只能判定无错误元素即为正确 
int myfind(char *Arrayone,char *Arraytwo,int Length);//声明判断函数 
int main()
{
	int length=0;
	const char originarray[3]={'l','j','k'};//数组形式规定正确答案 
	//char newarray[3]={'l','j','k'};
	char newarray[10];//定义数组形式的待判答案 
	//int idx=0;
	//char e;
	printf("please enter 3 to 10 letters.\n"); 
	//while(newarray[idx]!=1)
	//{
	   scanf("%s",newarray);//以字符串形式输入待判答案
	//   idx++;
	//   gets (array2[idx]);
	//   break;
	//}
	length=strlen(newarray);//取得待判答案的长度 
	myfind(originarray,newarray,length);//调用判断函数 
	return 0;
}
int myfind(char *Arrayone,char *Arraytwo,int Length)
{   
    //int judge(char *Array,int Length);
	int i,t,x,sum=0;
	int cntarray[3]={0};//定义累加数组，显示正确答案中数组元素出现次数 
	for(i=0;i<Length;i++)//嵌套循环比较正确答案数组与待判数组 
	{
		for(t=0;t<3;t++)
		{
			if(Arrayone[i]==Arraytwo[t])//若待判数组中元素有正确元素，
			                            //则对应元素的累加数组中的元素加一 
			{
				cntarray[t]++;
			}
		}
	}
	for(x=0;x<3;x++)
	{
		sum+=cntarray[x];//sum表示待判数组中正确元素出现的总次数 
	}
	if(sum==Length)//若sum与length的长度相等，则待判数组正确 
	{
		printf("the answer is right.\n");
	}else
	{
		printf("the answer is wrong.\n");
	}
	//judge(*cntarray,length);
	return 0;
}
//int judge(char *Array,int Length)
//{
//	int x,sum=0;
//	for(x=0;x<3;x++)
//	{
//		sum+=Array[x];
//	}
//	if(sum==Length)
//	{
//		printf("the answer is right.\n");
//	}else
//	{
//		printf("the answer is wrong.\n")
//	}
//	return 0;
//}
