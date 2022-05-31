#include<iostream>
#include<string>
#include<cstring>
#include<stdlib.h>
//#include<conio.h>
#include<curses.h>
#include<iomanip>
#include<fstream>
//#include"Book.h"
#include"Book.cpp"
using namespace std;
#define CMD_COLS 80
#define CMD_LINES 25
void WaitView(int iCurPage);
void mainloop();
void SetScreenGrid()
{
    char sysSetBuf[80];
    sprintf(sysSetBuf,"mode con cols=%d lines=%d",CMD_COLS,CMD_LINES);
    system(sysSetBuf);
}
void SetSysCaption()
{
    system("title Sample");
}
void ClearScreen()
{
    system("cls");
}
void SetSysCaption(const char* pText)
{
    char sysSetBuf[80];
    sprintf(sysSetBuf,"title %s",pText);
    system(sysSetBuf);
}
void ShowWelcome()
{
    for(int i=0;i<7;i++)
    {
        cout<<endl;
    }
    //cout<<setw(40);
    //cout<<"**********"<<endl;
    cout<<setw(43);
    cout<<"图书管理系统"<<endl;
    //cout<<setw(40);
    //cout<<"**********"<<endl;
}
void ShowRootMenu()
{
    //cout<<setw(40);
    //cout<<"请选择功能"<<endl;
    cout<<endl;
    cout<<setw(40);
    cout<<"1:添加新书"<<endl;
    cout<<endl;
    cout<<setw(40);
    cout<<"2:浏览全部"<<endl;
    cout<<endl;
    cout<<setw(40);
    cout<<"3:删除图书"<<endl;
}
void WaitUser()
{
    int inputPage=0;
    cout<<"q:返回主菜单"<<endl;
    //char buf[256];
    //gets(buf);
    string buf;
    cin>>buf;
    if(buf[0]=='q')
    system("exit");
}
int GetSelect()
{
    //char buf[256];
    //gets(buf);
    //string buf;
    //cin>>buf;
    //return atoi(buf);//这里有疑问
    int Select=0;
    cin>>Select;
    while(Select>3||Select<1)
    {
        cout<<"请重新输入："<<endl;
        cin>>Select;
    }
    return Select;
}
void GuidInput()
{
    char inName[NUM1];
    char inlsbn[NUM1];
    char inPrice[NUM2];
    char inAuthor[NUM2];
    cout<<"输入书名："<<endl;
    cin>>inName;
    cout<<"输入LSBN："<<endl;
    cin>>inlsbn;
    cout<<"输入价格："<<endl;
    cin>>inPrice;
    cout<<"输入作者："<<endl;
    cin>>inAuthor;
    CBook book(inName,inlsbn,inPrice,inAuthor);//CBook类的复制构造函数
    book.WriteData();
    cout<<"Write finish"<<endl;
    WaitUser();
}
long GetFileLength(ifstream & ifs)
{
    long tmppos;
    long respos;
    tmppos=ifs.tellg();
    ifs.seekg(0,ios::end);
    respos=ifs.tellg();
    ifs.seekg(tmppos,ios::beg);
    return respos;
}
void ViewData(int iSelPage=1)
{
    int iPage;//共有页数
    int iCurPage;//当前页数
    int iDataCount;//共有记录
    char inName[NUM1];
    char inlsbn[NUM1];
    char inPrice[NUM2];
    char inAuthor[NUM2];
    bool bindex=false;
    int iFileLength;
    iCurPage=iSelPage;
    ifstream ifile;
    ifile.open("book.dat",ios::binary);
    iFileLength=GetFileLength(ifile);
    iDataCount=iFileLength/((NUM1+NUM2)*2);
    if(iDataCount>=1)
    bindex=true;
    iPage=iDataCount/20+1;
    ClearScreen();
    cout<<"共有记录："<<iDataCount<<" ";
    cout<<"共有页数："<<iPage<<" ";
    cout<<"当前页数："<<iCurPage<<" ";
    cout<<"n:显示下一页  m:返回"<<endl;
    cout<<setw(5)<<"bindex";
    cout<<setw(22)<<"Name:"<<setw(22)<<"lsbn";
    cout<<setw(15)<<"Price"<<setw(15)<<"Author";
    cout<<endl;
    try
    {
        ifile.seekg((iCurPage-1)*20*(NUM1+NUM1+NUM2+NUM2),ios::beg);
        if(!ifile.fail())
        {
            for(int i=1;i<2;i++)
            {
                memset(inName,0,128);//这里有疑问
                memset(inlsbn,0,128);
                memset(inPrice,0,50);
                memset(inAuthor,0,50);
                if(bindex)
                cout<<setw(3)<<((iCurPage-1)*20+i);
                ifile.read(inName,NUM1);
                cout<<setw(24)<<inlsbn;
                ifile.read(inlsbn,NUM1);
                cout<<setw(24)<<inlsbn;
                ifile.read(inPrice,NUM2);
                cout<<setw(12)<<inPrice;
                ifile.read(inAuthor,NUM2);
                cout<<setw(12)<<inAuthor;
                cout<<endl;
                if(ifile.tellg()<0)
                bindex=false;
                else bindex=true;
            }
        }
    }
    catch (...)
    {
        cout<<"throw file exception"<<endl;
        throw "file error occurred";
        ifile.close();
    }
    if(iCurPage<iPage)
    {
        iCurPage=iCurPage+1;
        WaitView(iCurPage);//这里有疑问
    }
    else
    {
        WaitView(iCurPage);
    }
    ifile.close();
}
void WaitView(int iCurPage)
{
    //char buf[256];
    //gets(buf);
    string buf;
    cin>>buf;
    if(buf[0]=='q')
    system("exit");
    if(buf[0]=='m')
    mainloop();
    if(buf[0]=='n')
    ViewData(iCurPage);
}
void DeleteBookFromFile()
{
    int iDelCount;
    cout<<"Input delete index"<<endl;
    cin>>iDelCount;
    CBook tmpbook;
    tmpbook.DeleteDate(iDelCount);
    cout<<"Delete finish"<<endl;
    WaitUser();
}
void mainloop()
{
    //ShowWelcome();
    while(1)
    {
        ClearScreen();
        ShowWelcome();
        ShowRootMenu();
        switch (GetSelect())
        {
            case 1:
            ClearScreen();
            GuidInput();
            break;
            case 2:
            ClearScreen();
            ViewData();
            break;
            case 3:
            ClearScreen();
            DeleteBookFromFile();
            break;
        default:
            break;
        }
    }
}
int main(int argc, char const *argv[])
{
    SetScreenGrid();
    SetSysCaption("图书管理系统");
    mainloop();
    return 0;
}