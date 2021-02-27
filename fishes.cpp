#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<ctype.h>
using namespace std;
int main(){
int gd=DETECT,gm;
initgraph(&gd,&gm,””);
int newx=0,newy=0,inc_y=5;
cleardevice();
while(!kbhit()) {
ellipse(520-newx,200,30,330,90,30);
circle(450-newx,193,3);
line(430-newx,200,450-newx,200);
line(597-newx,185,630-newx,170);
line(597-newx,215,630-newx,227);
line(630-newx,170,630-newx,227);
line(597-newx,200,630-newx,200);
line(597-newx,192,630-newx,187);
line(597-newx,207,630-newx,213);
line(500-newx,190,540-newx,150+newy);
line(530-newx,190,540-newx,150+newy);
ellipse(300+newx, 250, 0, 360, 70, 35);
circle(350+newx,245,5);
line(330+newx,220,330+newx,280);
line(200+newx,225,231+newx,240);
line(200+newx,280,231+newx,260);
line(200+newx,225,200+newx,280);
if(newx>=500)
newx=0;
if(newy>=82)
inc_y=-5;
newx=newx+5;
if(newy<=0)
inc_y=5;
newy=newy+inc_y;
delay(50);
cleardevice(); }
cleardevice();
}