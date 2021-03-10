#include<stdio.h>
int main()
{
	void transpose();
	transpose();
}
void transpose()
{
		int i,j,k,m;
	printf("请输入行和列。\n");
	scanf("%d %d",&i,&j);
	int a[i][j],b[j][i];
	printf("请按行列的顺序依次输入矩阵中的元素:\n");
	for(k=0;k<i;k++){
		for(m=0;m<j;m++){
			scanf("%d",&a[k][m]);
			b[m][k]=a[k][m];
		}
		printf("\n");
	}
	printf("你输入初始数组为:\n");
	for(k=0;k<i;k++){
		for(m=0;m<j;m++){ 
			printf("%3d",a[k][m]);
		}
		printf("\n");
    }
    printf("转置数组为:\n");
    for(i=0;i<m;i++){
    	for(j=0;j<k;j++){
    		printf("%3d",b[i][j]);
    	}
    	printf("\n");
    }
}

