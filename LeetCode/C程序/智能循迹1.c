#include<reg52.h>
#define uchar unsigned char
#define uint unsigned int

#define Right_moto_pwm P3^0; //ENA
#define Left_moto_pwm P3^1; //ENB
///////////////////////////
sbit P22=P2^2; // 左前车轮
sbit P23=P2^3; // 左后车轮
sbit P24=P2^4; //右前车轮
sbit P25=P2^5; //右后车轮
////////////////////////////////
sbit P10=P1^0;//  红1外
sbit P11=P1^1; //红2外
sbit P12=P1^2; // 红3外
sbit P13=P1^3;//红4外
/////////////////////////////////
sbit P20=P3^0;
sbit P21=P3^1;

uchar pwm_val_left =0;
double push_val_left =0; //左电机占空比N/10
double pwm_val_right =0;
uchar push_val_right=0; //右电机占空比N/10

bit Right_moto_stp=1;
bit Left_moto_stp =1;
double time=0;
int flag=0;
void stop(void)
{        
        P22=1;
        P23=1;
        P24=1;
        P25=1;
}
void run(void)
{

        push_val_left =16;//PWM 调节参数1-20 1为最慢20是最快 改这个值可以改变其速度
    push_val_right =16;//} //PWM 调节参数1-20 1为最慢20是最快 改这个值可以改变其速度
                P22=0;
                P23=1;
                P24=0;
                P25=1;
}
         
void run1(void)
{
        push_val_left =7;
        push_val_right =7;        
                P22=0;
                P23=1;
                P24=0;
                P25=1;        
                        
}
void left(void)         //左转
{         
        push_val_left =20;
        push_val_right =20;
                P22=1;
                P23=1;
                P24=0;
                P25=1;
}
void left1(void)         //左转
{         
        push_val_left =20;
        push_val_right =19;
                P22=1;
                P23=0;
                P24=0;
                P25=1;
}         
        
void right(void)  //右转
{          
        push_val_left =18;
        push_val_right =18;
         
                P22=0;
                P23=1;
                P24=1;
                P25=1;
}
void right1(void)  //右转
{          
        push_val_left =20;
        push_val_right =19;
         
                P22=0;
                P23=1;
                P24=1;
                P25=0;
}
void pwm_out_left_moto(void) //左电机调速,调节push_val_left的值改变电机转速,占空比
{                                                                           //右转
        if(Left_moto_stp)
         {
         {if(pwm_val_left<=push_val_left)
                 { 
                        P21=1;        //ENB
                }
        else
                  {P21=0;}
         }
{if(pwm_val_left>=20)

  {pwm_val_left=0;}
  }
}

else
{P21=0;}
}
/////////////////////////////////////////////////
void pwm_out_right_moto(void) //右电机调速,调节push_val_left的值改变电机转速,占空比
{                                                           //左转
        if(Right_moto_stp)
{
        if(pwm_val_right<=push_val_right)
{P20=1;}
else
{P20=0;}

if(pwm_val_right>=20)

{pwm_val_right=0;}
}                                                                                                                                          
else
{P20=0;}
}

void xunji()
{         
         if(P10==0&&P11==0&&P12==0&&P13==0)
            {
                  if(flag==1)
                   run1();
                   else
                   run();
                }
                else
                if((P10==1&&P11==1&&P12==0&&P13==0)||
				(P10==1&&P11==1&&P12==1&&P13==0)||
				(P10==1&&P11==0&&P12==0&&P13==0)||
				(P10==0&&P11==1&&P12==0&&P13==0)) //zuozhuan
                {         if(flag==1)
                        left1();                //zuozhuan
                        else
                        left();
                }
                else
                if((P10==0&&P11==0&&P12==0&&P13==1)||
				(P10==0&&P11==0&&P12==1&&P13==0)||
				(P10==0&&P11==0&&P12==1&&P13==1)||
				(P10==0&&P11==1&&P12==1&&P13==1)) 

                {        if(flag==1)                //youzhuan
                        right1();        
                        else
                        right();
                 }
                  else
                if((P10==1&&P11==0&&P12==1&&P13==0)||
				(P10==0&&P11==1&&P12==0&&P13==1)||
				(P10==0&&P11==1&&P12==1&&P13==0)||
				(P10==1&&P11==0&&P12==0&&P13==1)||
				(P10==1&&P11==1&&P12==0&&P13==1)||
				(P10==1&&P11==0&&P12==1&&P13==1))
                    {
                           run1();
         	          }
                   else
                 if(P10==1&&P11==1&&P12==1&&P13==1)
                  {
                          if(flag==1)
                        run1();
                        else
                        stop();
                 }
}
void timer0()interrupt 1 using 2
{
TR1=0;
TH0=0xFC; //2Ms定时


TL0=0x30;



pwm_val_left++;

pwm_val_right++;

pwm_out_left_moto();

pwm_out_right_moto();
  //xunji();

                if(P10==0&&P11==0&&P12==0&&P13==0)
                {
                   if(flag==1)
                   run1();
                   else
                   run();
                }
                else
                if((P10==1&&P11==1&&P12==0&&P13==0)||
				(P10==1&&P11==1&&P12==1&&P13==0)||
				(P10==1&&P11==0&&P12==0&&P13==0)||
				(P10==0&&P11==1&&P12==0&&P13==0)) //zuozhuan
                {   if(flag==1)
                    left1();                //zuozhuan
                    else
                    left();
                }
                else
                if((P10==0&&P11==0&&P12==0&&P13==1)||
				(P10==0&&P11==0&&P12==1&&P13==0)||
				(P10==0&&P11==0&&P12==1&&P13==1)||
				(P10==0&&P11==1&&P12==1&&P13==1)) 

                {   if(flag==1)                //youzhuan
                    right1();        
                    else
                    right();
                 }
                  else
                if((P10==1&&P11==0&&P12==1&&P13==0)||
				(P10==0&&P11==1&&P12==0&&P13==1)||
				(P10==0&&P11==1&&P12==1&&P13==0)||
				(P10==1&&P11==0&&P12==0&&P13==1)||
				(P10==1&&P11==1&&P12==0&&P13==1)||
				(P10==1&&P11==0&&P12==1&&P13==1))
                    {
                        run1();
                   }
                   else
                 if(P10==1&&P11==1&&P12==1&&P13==1)
                  {
                        if(flag==1)
                        run1();
                        else
                        stop();
                 }
TR1=1;



}
void timer1() interrupt 3 
{ 
    TR1=1 ;
        TH1=0xFC; //2Ms定时
    TL1=0x30;

    time++;
   if(time<23000)
   {   
   flag=0;
   }
if(time>23000&&time<53000)
   {   
   flag=1;
   }
  if(time>53000)
                flag=0;
        

}  

/***************************************************/

void main(void)

{

TMOD=0X21;

TH0= 0xFC; //2ms定时
TL0= 0x30;
TH1= 0xFC; //2ms定时
TL1= 0x30;

TR0= 1;
ET0= 1;
ET1= 1;
EA = 1;

while(1) /*无限循环*/

        {

//        xunji();
                         
                if(P10==1&&P11==1&&P12==1&&P13==1&&flag==0)//全灭
                {                        
                        stop();                                          
                 }

        }

}

