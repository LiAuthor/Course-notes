#include<reg52.h>
#define uchar unsigned char
#define uint unsigned int
uint a,d,y,z,h,q;
sbit out1 = P0^0;//电机驱动输出控制管脚配置
sbit out2 = P0^1;
sbit out3 = P0^2;
sbit out4 = P0^3;
sbit in1 = P2^0;//循迹模块的信号输入管脚配置
sbit in2 = P2^1;
sbit in3 = P2^2;
sbit in4 = P2^3;
sbit in5 = P2^4;
delay(uint a);
intzuozhuan(uint z)//控制小车做左转动作  （参数z和a可以用来调节左转时间，本程序设定
//为不同参数表示每次调用程序左转时间相同不可变，没有调节转弯时间的功能） 
{
out1=1;
out2=0; 
out3=0;
out4=1;
delay(a);
}
intyouzhuan(uint y)//控制小车做右转动作（参数y和a可以用来调节右转时间，本程序设定
//为不同参数表示每次调用程序右转时间相同不可变,没有调节转弯时间的功能）
{
out1=0;
out2=1;
out3=1;
out4=0;
delay(a);
}
inthoutui(uint h)//控制小车可以使小车倒退行驶（参数功能与转弯类似）
out1=0;
out2=1;
out3=0;
out4=1;
delay(a);
out1=0;
out2=0;
out3=0;
out4=0;
delay(20);
}
int dengdai (uint d) //使小车停止当前所有动作,停止时间可调。
{
out1=0;
out2=0;
out3=0;
out4=0;
delay(d);
}

voidqianjin(q)//使小车向前行驶，行驶时间可调
{
out1=1;
out2=0;
out3=1;
delay(q);
}
void xunji()
{
P1=P1|0XF0;
delay(5);
if(in1==0){dengdai();youzhuan(100);while(in3==1);}
else if(in5==0){dengdai();zuozhuan(100);while(in3==1);}
else if(in2==0){dengdai();youzhuan(30);}
else if(in4==0){dengdai();zuozhuan(30);}
else if(in3==0){qianjin(20);}
else{qianjin(20);}
}
int delay(uint a)//延时子函数
{
uint x,y;
for(x=a;x>0;x--)
for(y=110;y>0;y--);
}
void main()
{
delay(2000);
while(1)
xunji();
}

