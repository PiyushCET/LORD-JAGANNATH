#include<stdio.h> 
#include<conio.h> 
#include<graphics.h> 
#include<dos.h> 
#include<math.h> 
int main() 
{ 
int gdriver = DETECT,gmode; 
int a,b,c,y,i,j,n; 
	initgraph(&gdriver,&gmode,"C:\\Turboc3\\BGI"); 
	for(i=0;i<650;i++) 
	{ 
	 for(j=0;j<452;j++){ 
	 a=i-120; 
	 b=i-295; 
	 c=i-470; 
	 y=abs(452-j)-226; 
 
	 if(pow(a+10,2)+pow(y+30,2)<=pow(7,2)||((10*abs(a+10)+7*y+259<=0)&&(30*abs(a+10)-7*y-539<=0))){ 
	 if(pow(a+10,2)+pow(y+30,2)<=pow(5,2)||((10*abs(a+10)+7*y+275<=0)&&(30*abs(a+10)-7*y-489<=0))){ 
	 putpixel(i,j,14);} 
	 else 
	 putpixel(i,j,4);} 
 
	 else if(pow(b+7,2)+pow(y+95,2)<=pow(5,2)||((7*abs(b+7)+5*y+495<=0)&&(21*abs(b+7)-5*y-640<=0))){ 
	 if(pow(b+7,2)+pow(y+95,2)<=pow(3.5,2)||((7*abs(b+7)+5*y+510<=0)&&(21*abs(b+7)-5*y-605<=0))){ 
	 putpixel(i,j,14);} 
	 else 
	 putpixel(i,j,4);} 
 
	 else if(pow(c+10,2)+pow(y+30,2)<=pow(7,2)||((10*abs(c+10)+7*y+259<=0)&&(30*abs(c+10)-7*y-539<=0))){ 
	 if(pow(c+10,2)+pow(y+30,2)<=pow(5,2)||((10*abs(c+10)+7*y+275<=0)&&(30*abs(c+10)-7*y-489<=0))){ 
	 putpixel(i,j,14);} 
	 else 
	 putpixel(i,j,4);} 
 
	 else if(pow(abs(a)-50,2)+pow(y-74,2)<=pow(50,2)&&11*abs(a)+19*y-1406>=0){ 
	 if(pow(abs(a)-50,2)+pow(y-74,2)<=pow(40,2)&&11*abs(a)+19*y-1406>=200){ 
	 putpixel(i,j,2);} 
	 else 
	 putpixel(i,j,4); 
	 } 
	 else if(pow(a,2)+pow(y-100,2)<=pow(64,2)&&y>=74){ 
	 if(pow(a,2)+pow(y-100,2)<=pow(54,2)&&y>=74){ 
	 putpixel(i,j,2);} 
	 else{ 
	  putpixel(i,j,4);} 
	 } 
 
	 else if(11*abs(b)+51*y+1479>=0&&20*abs(b)-7*y-1300<=0&&(pow(abs(b)-65,2)+pow(y-65,2)>=pow(65,2)&&y<55)){ 
	 if((2*abs(b)+y<=20&&y>=0)||(pow(b,2)+pow(y,2)<=pow(10,2)&&y<0)){ 
	 putpixel(i,j,14); 
	 } 
	 else if(11*abs(b)+51*y+1479>=300&&20*abs(b)-7*y-1300<=-150&&(pow(abs(b)-65,2)+pow(y-65,2)>=pow(70,2)&&y<55)){ 
	 putpixel(i,j,4); 
	 } 
	 else 
	 putpixel(i,j,0); 
	 } 
 
	  else if(pow(abs(c)-50,2)+pow(y-74,2)<=pow(50,2)&&11*abs(c)+19*y-1406>=0){ 
	 if(pow(abs(c)-50,2)+pow(y-74,2)<=pow(40,2)&&11*abs(c)+19*y-1406>=200){ 
	 putpixel(i,j,14);} 
	 else 
	 putpixel(i,j,4); 
	 } 
	 else if(pow(c,2)+pow(y-100,2)<=pow(64,2)&&y>=74){ 
	 if(pow(c,2)+pow(y-100,2)<=pow(54,2)&&y>=74){ 
	 putpixel(i,j,14);} 
	 else{ 
	  putpixel(i,j,4);} 
	 } 
 
	 else if(pow(a,2)+4*pow(y+40,2)<=pow(76,2)||(abs(a)<76&&abs(y-17)<57)){ 
 
	 if(4*pow(a,2)+pow(y-74,2)<=pow(46,2)&&8*pow(a,2)+pow(y-74,2)>=pow(40,2)){ 
	 putpixel(i,j,4); 
	 } 
	 else if(pow(a,2)+pow(y-49,2)<25||(3*abs(a)+y<64&&y>49)){ 
	 if(pow(a,2)+pow(y-49,2)<16&&y<49||(3*abs(a)+y<61&&y>=49)){ 
	 putpixel(i,j,12); 
	 } 
	 else 
	 putpixel(i,j,4); 
	 } 
	 else if(pow(a,2)+pow(y-23,2)<=28&&y>=23||45*abs(a)-7*y-154<=0&&y<23){ 
	 if(pow(a,2)+pow(y-23,2)>=20&&y>=23||45*abs(a)-7*y-100>=0&&y<23){ 
	 putpixel(i,j,4);} 
	 else 
	 putpixel(i,j,14); 
	 } 
 
	 else if((abs(a)>64||y>62)&&y>-40){ 
	 putpixel(i,j,14); 
	 } 
	 else if(pow(a,2)+4*pow(y+40,2)>=pow(64,2)&&y<=-40) 
	 putpixel(i,j,4); 
 
	 else if(pow(a,2)+pow(y+24,2)<=pow(10,2)&&pow(a,2)+pow(y+21,2)>=pow(8,2)){ 
	 putpixel(i,j,4); 
	 } 
 
	 else if(pow(abs(a)-35,2)+pow(y-8,2)<pow(8,2)){ 
	 putpixel(i,j,0); 
	 } 
	 else if(9*pow(abs(a)-35,2)+16*pow(y-8,2)<pow(71,2)){ 
	 putpixel(i,j,15); 
	 } 
	 else if(9*pow(abs(a)-35,2)+16*pow(y-8,2)<pow(84,2)||(abs(y-8)<=0.2*(abs(a)-63)+25)&&(abs(a)>35)){ 
	 putpixel(i,j,4); 
	 } 
 
	 else if(pow(a,2)+9*pow(y+45,2)<=pow(52,2)&&pow(a,2)+9*pow(y+38,2)>=pow(38,2)){ 
	 putpixel(i,j,4); 
	 } 
	 else 
	 putpixel(i,j,15); 
	 } 
	 else if(pow(b,2)+4*pow(y+106,2)<=pow(51,2)||(abs(b)<51&&abs(y+67.5)<38.5)){ 
 
	 if((abs(b)>42||y>-38)&&y>-106){ 
	 putpixel(i,j,15); 
	 } 
	 else if(pow(b,2)+4*pow(y+106,2)>=pow(42,2)&&y<=-106) 
	 putpixel(i,j,15); 
 
	 else if(abs(b)+abs(y+48)<=10){ 
	 if(pow(b,2)+pow(y+48,2)<=5){ 
	 putpixel(i,j,14); 
	 } 
	 else if(abs(b)+abs(y+48)<=8){ 
	 putpixel(i,j,12);} 
	 else 
	 putpixel(i,j,4); 
	 } 
	 else if(pow(b,2)+pow(y+61,2)<=18&&y>=-61||45*abs(b)-7*y-607<=0&&y<-61){ 
	 if(pow(b,2)+pow(y+61,2)>=10&&y>=-61||45*abs(b)-7*y-550>=0&&y<-61){ 
	 putpixel(i,j,4); 
	 } 
	 else 
	 putpixel(i,j,12); 
	 } 
 
	 else if(pow(b,2)+pow(y+93,2)<=pow(7,2)&&pow(b,2)+pow(y+91,2)>=pow(5.2,2)){ 
	 putpixel(i,j,4); 
	 } 
 
	 else if(pow(abs(b)-24,2)+pow(y+73,2)<pow(5,2)){ 
	 putpixel(i,j,0); 
	 } 
	 else if(9*pow(abs(b)-24,2)+16*pow(y+73,2)<pow(48,2)){ 
	 putpixel(i,j,15); 
	 } 
	 else if(9*pow(abs(b)-24,2)+16*pow(y+73,2)<=pow(55,2)||(abs(y+73)<=0.2*(abs(b)-44)+17)&&(abs(b)>24)){ 
	 putpixel(i,j,4); 
	 } 
 
	 else if(pow(b,2)+9*pow(y+109,2)<=pow(34,2)&&pow(b,2)+9*pow(y+105,2)>=pow(26,2)){ 
	 putpixel(i,j,4); 
	 } 
	 else 
	 putpixel(i,j,14); 
	 } 
	 else if(pow(c,2)+4*pow(y+40,2)<=pow(76,2)||(abs(c)<76&&abs(y-17)<57)){ 
 
	 if(4*pow(c,2)+pow(y-74,2)<=pow(46,2)&&8*pow(c,2)+pow(y-74,2)>=pow(40,2)){ 
	 putpixel(i,j,15); 
	 } 
	 else if(pow(c,2)+pow(y-49,2)<25||(3*abs(c)+y<64&&y>49)){ 
	 if(pow(c,2)+pow(y-49,2)<16&&y<49||(3*abs(c)+y<61&&y>=49)){ 
	 putpixel(i,j,14); 
	 } 
	 else 
	 putpixel(i,j,4); 
	 } 
	 else if(pow(c,2)+pow(y-23,2)<=28&&y>=23||45*abs(c)-7*y-154<=0&&y<23){ 
	 putpixel(i,j,15); 
	 } 
 
	 else if((abs(c)>64||y>62)&&y>-40){ 
	 putpixel(i,j,12); 
	 } 
	 else if(pow(c,2)+4*pow(y+40,2)>=pow(64,2)&&y<=-40) 
	 putpixel(i,j,15); 
 
	 else if(pow(c,2)+pow(y+24,2)<=pow(10,2)&&pow(c,2)+pow(y+21,2)>=pow(8,2)){ 
	 putpixel(i,j,4); 
	 } 
 
	 else if(pow(abs(c)-35,2)+pow(y-8,2)<pow(10,2)){ 
	 putpixel(i,j,0); 
	 } 
	 else if(pow(abs(c)-35,2)+pow(y-8,2)<pow(25,2)){ 
	 putpixel(i,j,15); 
	 } 
	 else if(pow(abs(c)-35,2)+pow(y-8,2)<=pow(29,2)||(abs(y-8)<=0.1*(abs(c)-64)+32)&&(abs(c)>35)){ 
	 putpixel(i,j,4); 
	 } 
 
	 else if(pow(c,2)+9*pow(y+45,2)<=pow(52,2)&&pow(c,2)+9*pow(y+38,2)>=pow(38,2)){ 
	 putpixel(i,j,4); 
	 } 
	 else 
	 putpixel(i,j,0); 
	 } 
 
	 else if(pow(a,2)+pow(y+226,2)<=pow(135,2)&&y>=5.67*abs(a)-550){ 
	 if(pow(a,2)+pow(y+226,2)>=pow(129,2)||y<=5.67*abs(a)-500||y<-220||(y>-214&&y<-208)||(y>-202&&y<-196)){ 
	 putpixel(i,j,4); 
	 } 
	 else{ 
	 putpixel(i,j,2); } 
	 } 
	 else if(pow(b,2)+pow(y+226,2)<=pow(88,2)&&y>=5.67*abs(b)-420){ 
	 if(pow(b,2)+pow(y+226,2)>=pow(82,2)||y<=5.67*abs(b)-390||y<-220||(y>-214&&y<-208)||(y>-202&&y<-196)){ 
	 putpixel(i,j,4); 
	 } 
	 else{ 
	 putpixel(i,j,0); } 
	 } 
	 else if(pow(c,2)+pow(y+226,2)<=pow(135,2)&&y>=5.67*abs(c)-550){ 
	 if(pow(c,2)+pow(y+226,2)>=pow(129,2)||y<=5.67*abs(c)-500||y<-220||(y>-214&&y<-208)||(y>-202&&y<-196)){ 
	 putpixel(i,j,4); 
	 } 
	 else{ 
	 putpixel(i,j,14); } 
	 } 
 
	 else if(abs(a)<20&&y<-40){ 
	 if(abs(a)>16){ 
	 putpixel(i,j,4);} 
	 else { 
	 putpixel(i,j,14);  } 
	 } 
	 else if(abs(b)<14&&y<-106){ 
	 if(abs(b)>11){ 
	 putpixel(i,j,4);} 
	 else { 
	 putpixel(i,j,14); } 
	 } 
	 else if(abs(c)<20&&y<-40){ 
	 if(abs(c)>16){ 
	 putpixel(i,j,4);} 
	 else { 
	 putpixel(i,j,14);} 
	 } 
 
	 else if(pow(abs(a)-100,2)+pow(y+40,2)<=400||abs(y+35)<15&&abs(abs(a)-88)<15){ 
	 if(pow(abs(a)-100,2)+pow(y+40,2)>=289&&pow(abs(a)-100,2)+pow(y+40,2)<=400){ 
	 putpixel(i,j,4); 
	 } 
	 else{ 
	 putpixel(i,j,14);  } 
	 } 
	 else if(pow(abs(c)-100,2)+pow(y+40,2)<=400||abs(y+35)<15&&abs(abs(c)-88)<15){ 
	 if(pow(abs(c)-100,2)+pow(y+40,2)>=289&&pow(abs(c)-100,2)+pow(y+40,2)<=400){ 
	 putpixel(i,j,4); 
	 } 
	 else{ 
	 putpixel(i,j,14);} 
	 } 
 
	 else if((abs(c-143)<16&&y<-16)||pow(c-143,2)+pow(y+16,2)<=pow(16,2)){ 
	 if((abs(c-143)>12&&y<-16)||pow(c-143,2)+pow(y+16,2)>=pow(12,2)&&y>=-16){ 
	 putpixel(i,j,4); 
	 } 
	 else if(abs(y+40)<2||abs(y+60)<2||pow(c-143,2)+pow(y+50,2)<=16){ 
	 putpixel(i,j,4);} 
	 else 
	 putpixel(i,j,14);} 
	 else{ 
	 putpixel(i,j,1); 
	 } 
	 } 
	} 
	{setcolor(4); 
	line(20,255,20,277); 
	line(10,266,30,258); 
	line(30,258,30,266); 
	line(10,258,10,266); 
 
	line(220,255,224,263); 
	line(224,263,220,279); 
	line(220,279,216,263); 
	line(216,263,220,255); 
	line(214,263,226,263); 
 
	circle(370,266,1); 
	circle(370,266,10); 
 
	ellipse(570,269,0,360,5,9); 
	ellipse(570,263,0,360,3,1); 
	ellipse(570,259,0,360,2,1); 
 
	} 
getch(); 
return 0; 
} 
