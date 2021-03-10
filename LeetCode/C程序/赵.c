#include<stdio.h>
int main()
{
	int type,choose;
	printf("选一位你感兴趣的朋友吧!\n");
	printf("1:小米  2:小梁  3:小红\n");
	scanf("%d",&type);
	switch(type)
	{
		case 1:
			printf("你觉得他是一个怎样的人？\n");
			printf("  1:有远见    2:开朗\n");
			scanf("%d",&choose);
			if(choose==1){
				printf("哈哈，你高看他了。\n"); 
			}else{
				printf("嗯嗯，我也是这么觉得。\n");
			}break;
		case 2:
			printf("你俩一起干过啥事？\n");
			printf("  1:打乒乓球    2:一起吃过饭\n");
			scanf("%d",&choose);
			if(choose==2){
				printf("什么，我怎么不知道。\n"); 
			}else{
				printf("我知道，好像每次都是你输。\n");
			}break;
		case 3:
			printf("你抄过他的作业吗？\n");
			printf("  1:抄过      2:没抄过\n");
			scanf("%d",&choose);
			 if(choose==1){
				printf("哈哈，不错，实话实说。\n"); 
			}else{
				printf("天啊，你是个骗子。\n");
			}break;
			default:
	            printf("请重新选择。");
	         break; 
		 
	}return 0;
}
