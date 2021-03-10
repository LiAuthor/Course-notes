
#include<reg52.h>

sbit you1 = P1^4;
sbit you2 = P1^5;
sbit zuo1 = P1^6;
sbit zuo2 = P1^7;

sbit y1 = P1^2;      //   ÓÒ±ßÌ½Í·
sbit y2 = P1^3; 
sbit z1 = P1^1;      //  ×ó±ßÌ½Í·
sbit z2 = P1^0;


void delay(int z)
{
	int i,j;
	for(i=z;i>0;i--)
	for(j=10;j>0;j--);	
}
void qian()
{
	you1 = 0;
	you2 = 1;
	zuo1 = 0;
	zuo2 = 1;
	delay(30);
	you1 = 0;
	you2 = 0;
	zuo1 = 0;
	zuo2 = 0;
	delay(45);

}
void you()
{
	you1 = 1 ;
	you2 = 0 ;
	zuo1 = 0;
	zuo2 = 1;
	delay(60);
	you1 = 0;
	you2 = 0;
	zuo1 = 0;
	zuo2 = 0;
	delay(30);

}
void zuo()
{
	zuo1 = 1;
	zuo2 = 0 ;
	you1 = 0;
	you2 = 1;
	delay(60);
	you1 = 0;
	you2 = 0;
	zuo1 = 0;
	zuo2 = 0;
	delay(30);

}
void main()
{

		while(1)
		{	   
		  	 					
			    qian();
		delay(100000);
	
	zuo();
		delay(100000);
		you();
		delay(100000);
		 }
}