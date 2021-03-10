#include<stdio.h>
int main()
{
	int a[3][4]={{1,2,36,4},{52,6,70,8},{11,9,51,12}};
	int i,j,row=0,colum=0;
	int max=a[0][0];
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			if(a[i][j]>max){
			max=a[i][j];
			row=i+1;
			colum=j+1;	
			}
			//else{
			//max=a[i][j-1];
			//row=i+1;
			//colum=j;	
			//}
		}
	}printf("max=%d\nrow=%d\ncolum=%d",max,row,colum);
	return 0;
} 
