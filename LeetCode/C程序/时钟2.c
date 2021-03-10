#include <graphics.h>
#include <conio.h>
#include <math.h>
 
void Draw(int hour, int minute, int second)
{
     double a_hour, a_min, a_sec;       // 时、分、秒针的弧度值
     int x_hour, y_hour, x_min, y_min, x_sec, y_sec; // 时、分、秒针的末端位置
     int x_hour1,y_hour1,x_min1,y_min1,x_sec1,y_sec1;
     // 计算时、分、秒针的弧度值
     a_sec = second * 2 * PI / 60;
     a_min = minute * 2 * PI / 60 ;
     a_hour= hour * 2 * PI / 12 + a_min / 12;;
 
     // 计算时、分、秒针的首末端位置
     x_sec = 320 + (int)(120 * sin(a_sec));
     y_sec = 240 - (int)(120 * cos(a_sec));
     x_min = 320 + (int)(100 * sin(a_min));
     y_min = 240 - (int)(100 * cos(a_min));
     x_hour= 320 + (int)(70 * sin(a_hour));
     y_hour= 240 - (int)(70 * cos(a_hour));
     x_sec1= 320 - (int)(15   * sin(a_sec));
     y_sec1= 240 + (int)(15   * cos(a_sec));
     x_min1= 320 - (int)(10   * sin(a_min));
     y_min1= 240 + (int)(10   * cos(a_min));
     x_hour1= 320 - (int)(5 * sin(a_hour));
     y_hour1= 240 + (int)(5 * cos(a_hour));
 
 
 
     // 画时针
     setlinestyle(PS_SOLID, NULL, 7);
     setcolor(WHITE);
     line(x_hour1, y_hour1, x_hour, y_hour);
 
     // 画分针
     setlinestyle(PS_SOLID, NULL, 4);
     setcolor(LIGHTGRAY);
     line(x_min1, y_min1, x_min, y_min);
 
     // 画秒针
     setlinestyle(PS_SOLID, NULL, 2);
     setcolor(RED);
     line(x_sec1, y_sec1, x_sec, y_sec);
}
 
void main()
{
     initgraph(640, 480);    // 初始化 640 x 480 的绘图窗口
 
     // 绘制一个简单的表盘
     circle(320, 240, 2);
     circle(320, 240, 60);
     circle(320, 240, 160);
     outtextxy(296, 330, "   竹斌");
     int x,y;
     for(int i=0;i<12;i++)
     {
         x=320+(int)(140*sin(30*i*2*PI/360));
         y=240-(int)(140*cos(30*i*2*PI/360));
switch(i)
         {
         case 0:outtextxy(x-5,y-5,"12");break;
         case 1:outtextxy(x-5,y-5,"1");break;
         case 2:outtextxy(x-5,y-5,"2");break;
         case 3:outtextxy(x-5,y-5,"3");break;
         case 4:outtextxy(x-5,y-5,"4");break;
         case 5:outtextxy(x-5,y-5,"5");break;
         case 6:outtextxy(x-5,y-5,"6");break;
         case 7:outtextxy(x-5,y-5,"7");break;
         case 8:outtextxy(x-5,y-5,"8");break;
         case 9:outtextxy(x-5,y-5,"9");break;
         case 10:outtextxy(x-5,y-5,"10");break;
         case 11:outtextxy(x-5,y-5,"11");break;
         }
     }
 
     // 设置 XOR 绘图模式
     setwritemode(R2_XORPEN); // 设置 XOR 绘图模式
 
 
     //画刻度
     int a,b,a1,b1,n=0;
     for(n=0;n<60;n++)
     {
     a=320+(int)(160 * sin(n*2*PI/60));
     b=240-(int)(160 * cos(n*2*PI/60));
     a1=320+(int)(150 * sin(n*2*PI/60));
     b1=240-(int)(150 * cos(n*2*PI/60));
     if(n%5==0)
         setlinestyle(PS_SOLID,NULL,5);
     else
         setlinestyle(PS_SOLID,NULL,1);
     line(a1,b1,a,b);
     }
 
 
     // 绘制表针
     SYSTEMTIME ti;      // 定义变量保存当前时间
     while(!kbhit())      // 按任意键退出钟表程序
     {
          GetLocalTime(&ti);         // 获取当前时间
          Draw(ti.wHour, ti.wMinute, ti.wSecond);    // 画表针
          Sleep(1000);          // 延时 1 秒
          Draw(ti.wHour, ti.wMinute, ti.wSecond);    // 擦表针（擦表针和画表针的过程是一样的）
     }
 
     closegraph();      // 关闭绘图窗口
}
