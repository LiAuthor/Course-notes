#include<stdio.h>
int main()
{
	int a[3][4]={{19,29,31,47},{500,69,83,8},{34,45,64,76}};
	int i,j,hang=0,lie=0;
	int max=a[0][0];
	for(i=0;i<3;i++){
	for(j=0;j<4;j++){
		if(a[i][j]>max){
		max=a[i][j];
		hang=i+1;
		lie=j+1;}}}
	printf("max=%d,hang=%d,lie=%d",max,hang,lie);
	return 0;
}
