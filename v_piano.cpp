#include<iostream>
#include<conio.h>
#include<windows.h>
#include<dos.h>
#include<stdlib.h>
#include<mmsystem.h>
#include<graphics.h>
using namespace std;
int w=610, h=600;

void background()
{
	setfillstyle(1,8);
	bar(50,100,560,430);
	setfillstyle(3,7);
	bar(50,100,560,430);
	setcolor(4);
	line(50,200,560,200);
	setcolor(5);
	line(50,250,560,250);
	
	//white notes draw
	
	setfillstyle(1,15);
	bar(60,320,100,390);
	setfillstyle(1,15);
	bar(110,320,150,390);
	setfillstyle(1,15);
	bar(160,320,200,390);
	setfillstyle(1,15);
	bar(210,320,250,390);
	setfillstyle(1,15);
	bar(260,320,300,390);
	setfillstyle(1,15);
	bar(310,320,350,390);
	setfillstyle(1,15);
	bar(360,320,400,390);
	setfillstyle(1,15);
	bar(410,320,450,390);
	setfillstyle(1,15);
	bar(460,320,500,390);
	setfillstyle(1,15);
	bar(510,320,550,390);
	
	//black notes draw
	setfillstyle(1,0);
	bar(90,260,120,320);
	setfillstyle(1,0);
	bar(140,260,170,320);
	setfillstyle(1,0);
	bar(240,260,270,320);
	setfillstyle(1,0);
	bar(290,260,320,320);
	setfillstyle(1,0);
	bar(340,260,370,320);
	setfillstyle(1,0);
	bar(440,260,470,320);
	setfillstyle(1,0);
	bar(490,260,520,320);
	
	/////////////////////////////////
	setbkcolor(14);
	settextstyle(1,0,1);
	outtextxy(370,130,"Vidhan's");
	outtextxy(370,150,"Piano");
	setbkcolor(8);
	
	setcolor(15);
	settextstyle(3,0,1);
	outtextxy(70,390,"z");
	outtextxy(100,390,"a");
	outtextxy(125,390,"x");
	outtextxy(150,390,"s");
	outtextxy(175,390,"c");
	outtextxy(225,390,"v");
	outtextxy(250,390,"f");
	outtextxy(275,390,"b");
	outtextxy(300,390,"g");
	outtextxy(325,390,"n");
	outtextxy(350,390,"h");
	outtextxy(375,390,"m");
	outtextxy(425,390,",");
	outtextxy(450,390,"k");
	outtextxy(475,390,".");
	outtextxy(500,390,"l");
	outtextxy(525,390,"/"); 
}

int main()
{
	initwindow(w,h);
	background();
	
	for(;;)
	{
		
		char a=getch();
		
		if (a=='a'||a=='A')
		{
			PlaySound("F:\\vidhan\\note\\C_s.wav",NULL,SND_FILENAME|SND_ASYNC);
			setfillstyle(1,7);
			bar(90,260,120,320);
			Sleep(200);
			setfillstyle(1,0);
			bar(90,260,120,320);
		}
		if (a=='s'||a=='S')
		{
		PlaySound("F:\\vidhan\\note\\D_s.wav",NULL,SND_FILENAME|SND_ASYNC);
			setfillstyle(1,7);
			bar(140,260,170,320);
			Sleep(200);
			setfillstyle(1,0);
			bar(140,260,170,320);
		}
		
		if (a=='f'||a=='F')
		{
			PlaySound("F:\\vidhan\\note\\F_s.wav",NULL,SND_FILENAME|SND_ASYNC);
			setfillstyle(1,7);
			bar(240,260,270,320);
			Sleep(200);
			setfillstyle(1,0);
			bar(240,260,270,320);
		}
		if (a=='g'||a=='G')
		{
		PlaySound("F:\\vidhan\\note\\G_s.wav",NULL,SND_FILENAME|SND_ASYNC);
			setfillstyle(1,7);
			bar(290,260,320,320);
			Sleep(200);
			setfillstyle(1,0);
			bar(290,260,320,320);
		}
		if (a=='h'||a=='H')
		{
			PlaySound("F:\\vidhan\\note\\A_s.wav",NULL,SND_FILENAME|SND_ASYNC);
			setfillstyle(1,7);
			bar(340,260,370,320);
			Sleep(200);
			setfillstyle(1,0);
			bar(340,260,370,320);
		}
		if (a=='k'||a=='K')
		{
			PlaySound("F:\\vidhan\\note\\C_s1.wav",NULL,SND_FILENAME|SND_ASYNC);
			setfillstyle(1,7);
			bar(440,260,470,320);
			Sleep(200);
			setfillstyle(1,0);
			bar(440,260,470,320);
		}
		if (a=='l'||a=='L')
		{
			PlaySound("F:\\vidhan\\note\\D_s1.wav",NULL,SND_FILENAME|SND_ASYNC);
			setfillstyle(1,7);
			bar(490,260,520,320);
			Sleep(200);
			setfillstyle(1,0);
			bar(490,260,520,320);
		}
		if (a=='z'||a=='Z')
		{
			PlaySound("F:\\vidhan\\note\\C.wav",NULL,SND_FILENAME|SND_ASYNC);
			setfillstyle(1,4);
			bar(60,320,100,390);
			Sleep(200);
			setfillstyle(1,15);
			bar(60,320,100,390);
		}
		if (a=='x'||a=='X')
		{
			PlaySound("F:\\vidhan\\note\\D.wav",NULL,SND_FILENAME|SND_ASYNC);
			setfillstyle(1,4);
			bar(110,320,150,390);
			Sleep(200);
			setfillstyle(1,15);
			bar(110,320,150,390);
		}
		if (a=='c'||a=='C')
		{
			PlaySound("F:\\vidhan\\note\\E.wav",NULL,SND_FILENAME|SND_ASYNC);
			setfillstyle(1,4);
			bar(160,320,200,390);
			Sleep(200);
			setfillstyle(1,15);
			bar(160,320,200,390);
		}
		if (a=='v'||a=='V')
		{
			PlaySound("F:\\vidhan\\note\\F.wav",NULL,SND_FILENAME|SND_ASYNC);
			setfillstyle(1,4);
			bar(210,320,250,390);
			Sleep(200);
			setfillstyle(1,15);
			bar(210,320,250,390);
		}
		if (a=='b'||a=='B')
		{
			PlaySound("F:\\vidhan\\note\\G.wav",NULL,SND_FILENAME|SND_ASYNC);
			setfillstyle(1,4);
			bar(260,320,300,390);
			Sleep(200);
			setfillstyle(1,15);
			bar(260,320,300,390);
		}
		if (a=='n'||a=='N')
		{
		PlaySound("F:\\vidhan\\note\\A.wav",NULL,SND_FILENAME|SND_ASYNC);
			setfillstyle(1,4);
			bar(310,320,350,390);
			Sleep(200);
			setfillstyle(1,15);
			bar(310,320,350,390);
		}
		if (a=='m'||a=='M')
		{
			PlaySound("F:\\vidhan\\note\\B.wav",NULL,SND_FILENAME|SND_ASYNC);
			setfillstyle(1,4);
			bar(360,320,400,390);
			Sleep(200);
			setfillstyle(1,15);
			bar(360,320,400,390);
		}
		if (a==',')
		{
			PlaySound("F:\\vidhan\\note\\C1.wav",NULL,SND_FILENAME|SND_ASYNC);
			setfillstyle(1,4);
			bar(410,320,450,390);
			Sleep(200);
			setfillstyle(1,15);
			bar(410,320,450,390);
		}
		if (a=='.')
		{
			PlaySound("F:\\vidhan\\note\\D1.wav",NULL,SND_FILENAME|SND_ASYNC);
			setfillstyle(1,4);
			bar(460,320,500,390);
			Sleep(200);
			setfillstyle(1,15);
			bar(460,320,500,390);
		}
		if (a=='/')
		{
			PlaySound("F:\\vidhan\\note\\E1.wav",NULL,SND_FILENAME|SND_ASYNC);
			setfillstyle(1,4);
			bar(510,320,550,390);
			Sleep(200);
			setfillstyle(1,15);
			bar(510,320,550,390);
		}
		if(a=='Q'||a=='q')
		{break;
		}
	}
	getch();
	closegraph();
	exit(0);
}

