#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<stdio.h>
float ARE(float,float);
float LR(float,float);
float BR(float,float);
float VR(float,float,float);
float AS(float);
float SS(float);
float VS(float);
float AC(float);
float RC(float);
float VC(float,float);
float DR(float,float);
float DS(float);

void main()
{
   clrscr();
   float area,rad,l,b,s,v,h,d;
   int ch;
   char cho,str[30];
   do
   {
    clrscr();
    cout<<"--------------------------------------------------------------------------------"<<endl;
    cout<<"|                       WELCOME TO MENSURATION CALCUATOR                       |"<<endl;
    cout<<"--------------------------------------------------------------------------------"<<endl;
    cout<<"|                              BY:FURKAN KHAN                                  |"<<endl;
    cout<<"| 1-CALCULATE AREA OF RECTANGLE                                                |"<<endl;
    cout<<"| 2-CALCULATE LENGTH OF RECTANGLE                                              |"<<endl;
    cout<<"| 3-CALCULATE BREADTH OF RECTANGLE                                             |"<<endl;
    cout<<"| 4-CALCULATE VOLUME OF CUBOID                                                 |"<<endl;
    cout<<"| 5-CALCULATE AREA OF SQUARE                                                   |"<<endl;
    cout<<"| 6-CALCULATE SIDE OF SQUARE                                                   |"<<endl;
    cout<<"| 7-CALCULATE VOLUME OF CUBE                                                   |"<<endl;
    cout<<"| 8-CALCULATE AREA OF CIRCLE                                                   |"<<endl;
    cout<<"| 9-CALCULATE RADIUS OF CIRCLE                                                 |"<<endl;
    cout<<"| 10-CALCULATE VOLUME OF CYLINDER                                              |"<<endl;
    cout<<"| 11-CALCULATE DIAGONAL OF RECTANGLE                                           |"<<endl;
    cout<<"| 12-CALCULATE DIAGONAL OF SQUARE                                              |"<<endl;
    cout<<"|WHAT U WANT TO DO(1-12):                                                      |"<<endl;
    cout<<"-------------------------------------------------------------------------------|"<<endl;
    cin>>ch;
    clrscr();
    switch(ch)
       {
       case 1:
       cout<<"ENTER LENGTH:";
       cin>>l;
       cout<<"ENTER BREADTH:";
       cin>>b;
       area=ARE(l,b);
       cout<<"AREA OF RECTANGLE IS:"<<area<<endl;
       break;
       case 2:
       cout<<"ENTER BREADTH:";
       cin>>b;
       cout<<"ENTER AREA:";
       cin>>area;
       l=LR(b,area);
       cout<<"LENGTH IS:"<<l<<endl;
       break;
       case 3:
       cout<<"ENTER LENGTH:";
       cin>>l;
       cout<<"ENTER AREA:";
       cin>>area;
       b=BR(area,l);
       cout<<"BREADTH IS:"<<b<<endl;
       break;
       case 4:
       cout<<"ENTER LENGTH:";
       cin>>l;
       cout<<"ENTER BREADTH:";
       cin>>b;
       cout<<"ENTER HEIGHT:";
       cin>>h;
       v=VR(l,h,b);
       cout<<"VOLUME IS:"<<v<<endl;
       break;
       case 5:
       cout<<"ENTER LENGHT OF SIDE:";
       cin>>s;
       area=AS(s);
       cout<<"AREA IS:"<<area<<endl;
       break;
       case 6:
       cout<<"ENTER AREA OF SQUARE:";
       cin>>area;
       s=SS(area);
       cout<<"SIDE OF SQUARE IS:"<<s<<endl;
       break;
       case 7:
       cout<<"ENTER SIDE OF CUBOID:";
       cin>>s;
       v=VS(s);
       cout<<"VOLUME OF CUBE IS:"<<v<<endl;
       break;
       case 8:
       cout<<"ENTER RADIUS:";
       cin>>rad;
       area=AC(rad);
       cout<<"AREA OF CIRCLE IS:"<<area<<endl;
       break;
       case 9:
       cout<<"ENTER AREA OF CIRCLE:";
       cin>>area;
       rad=RC(area);
       cout<<"RADIUS OF CIRCLE IS:"<<rad<<endl;
       break;
       case 10:
       cout<<"ENTER RADIUS:";
       cin>>rad;
       cout<<"ENTER HEIGHT:";
       cin>>h;
       v=VC(rad,h);
       cout<<"VOLUME IS:"<<v<<endl;
       break;
       case 11:
       cout<<"ENTER LENGTH:";
       cin>>l;
       cout<<"ENTER BREADTH:";
       cin>>b;
       d=DR(l,b);
       cout<<"LENGTH OF DIAGONAL IS:"<<d<<endl;
       break;
       case 12:
       cout<<"ENTER LENGTH OF SIDE:";
       cin>>s;
       d=DS(s);
       cout<<"LENGTH OF DIAGONAL IS:"<<d<<endl;
       break;
       default:
       cout<<"INVALID"<<endl;
       break;
    }
    cout<<"ANY PROBLEM YOU FACED DURING USE:";
    gets(str);
    cout<<"DO YOU WANT TO CONTINUE:";
    cin>>cho;
   }
   while(cho=='y'||cho=='Y');
   getch();
}


float ARE(float x,float y)
{
return x*y;
}


float LR(float x,float y)
{
return y/x;
}

float BR(float x,float y)
{
return x/y;
}

float VR(float x,float y,float z)
{
return x*y*z;
}

float AS(float x)
{
return pow(x,2);
}

float SS(float x)
{
return sqrt(x);
}

float VS(float x)
{
return pow(x,3);
}

float AC(float x)
{
return 3.14*x*x;
}

float RC(float x)
{
int z;
z=x/3.14;
return sqrt(z);
}

float VC(float x,float y)
{
return 3.14*x*x*y;
}

float DR(float x,float y)
{
return sqrt(x*x+y*y);
}

float DS(float x)
{
return sqrt(x*x+x*x);
}




