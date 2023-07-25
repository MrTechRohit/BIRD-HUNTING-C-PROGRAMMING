//.......... WELCOME ALL OF YOU ON ROHIT TECH STUDY CHANNEL ...............//
//___________---__ C++ PROGRAM TO CREATE BIRD HUNTING ___---______________//

#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>

int a,b,c,d,x,y,s;

void man();
void tree();
void gun();
void bird();


void main()
{
int a,b,c,d,x,y;

int gdriver = DETECT,gmode;
initgraph(&gdriver,&gmode,"C:\\TC\\BGI");

man();
gun();
bird();
tree();

delay(2000);
b=0;
c=0;
for(a=0;a<43;a++)
{

//....bullet.....
line(130+b,296-c,132+b,294-c);
line(130+b,296-c,131+b,297-c);
line(132+b,294-c,133+b,295-c);
line(131+b,297-c,133+b,295-c);
line(132+b,294-c,134+b,293-c);
b=b+6;
c=c+6;
delay(50);
cleardevice();
man();
tree();
gun();
bird();
}


d=0;
for(a=0;a<110;a++)
{

//_____falling bird______//
circle(410,50+d,4);
line(409,48+d,405,44+d);
line(409,48+d,413,44+d);
ellipse(397,50+d,0,360,8,4);
floodfill(398,51+d,WHITE);
line(390,50+d,372,50+d);
line(390,50+d,373,48+d);
line(390,50+d,373,47+d);
line(390,50+d,373,52+d);
line(390,50+d,373,53+d);

//...bird legs...//
line(397,48+d,394,43+d);
line(397,48+d,399,43+d);

d=d+3;
delay(30);
cleardevice();

man();
tree();
gun();

}

//----Falling bird----//

circle(410,50+d,4);
line(409,48+d,405,44+d);
line(409,48+d,413,44+d);
ellipse(397,50+d,0,360,8,4);
floodfill(398,51+d,WHITE);
line(390,50+d,372,50+d);
line(390,50+d,373,48+d);
line(390,50+d,373,47+d);
line(390,50+d,373,52+d);
line(390,50+d,373,53+d);

//...BIRD leg...//
line(397,48+d,394,43+d);
line(397,48+d,399,43+d);
getch();
}

void man()
{

//----- man ---//
ellipse(100,300,0,360,7,9);
circle(102,298,1);
line(103,303,105,303);
rectangle(99,310,102,315);
rectangle(97,315,105,335);
line(97,335,97,355);
line(105,335,101,355);
ellipse(101,357,0,360,5,2);
line(102,322,107,327);
line(103,326,108,330);
line(107,327,110,320);
line(108,330,111,321);

//  ground //
setcolor(13);
line(0,360,600,360);
setcolor(15);
}

void gun()
{

// gun  //
line(97,324,127,299);
line(104,320,129,299);
line(97,324,102,329);
line(104,320,102,329);
line(108,317,110,320);
line(126,299,127,300);

}
void bird()
{

//bird
circle(395,20,4);
line(394,20,388,20);
ellipse(395,33,0,360,4,8);
floodfill(396,34,WHITE);
line(395,38,391,53);
line(395,38,393,54);
line(396,38,395,52);
line(396,38,397,53);

}
void tree()
{

//tree
setcolor(6);
line(350,30,420,50);
line(350,40,425,65);
line(417,0,417,50);
line(417,63,417,400);

line(450,0,450,180);
line(450,210,450,400);
ellipse(406,400,250,0,10,10);
ellipse(460,400,180,270,10,10);
line(450,210,530,120);
line(450,175,500,120);
line(500,120,505,100);
line(505,125,510,105);
line(505,125,520,105);

setcolor(15);

setfillstyle(1,LIGHTGREEN);
circle(580,100,50);
floodfill(590,120,WHITE);
circle(520,50,50);
floodfill(522,52,WHITE);
circle(600,50,50);
floodfill(620,20,WHITE);
circle(300,20,50);
floodfill(310,25,WHITE);
circle(320,40,50);
floodfill(325,65,WHITE);
floodfill(360,30,WHITE);
circle(240,50,50);
floodfill(230,55,WHITE);
}



