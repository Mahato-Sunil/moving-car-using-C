/*  This Program is contributed by Sunil Mahato 
    a Student of BCA 2nd Semester
*/

/* program to draw a car animation in  C */

#include <graphics.h>

int main() 
{
	int gd = DETECT, gm;    
	int i,j=2;

	initgraph(&gd,&gm,"D:/Dev-cpp/BGI");          // initialization of the graphics driver
	initwindow(getmaxwidth(), getmaxheight());		// function to diplay full screen graphics window
  
  // using the loop to animate the moving car 
	for( i = 0 ; i <= 550 ; i = i + 10)
  {
		int top[] = {130+i, 80, 260+i, 80, 280+i, 110, 105+i, 110, 130+i, 80};    // cordinates for the car's top part
		
    // drawing the car in c
		drawpoly(5,top);
		rectangle(90+i,110,310+i,160);
		circle(130+i, 185, 20);
		circle(250+i, 185, 20);
		line(20, 220, 365+i, 220);
		outtextxy(180+i, 130, "SUNIL'S CAR");
		setcolor(j);
		delay(100);
		if( i == 550)
			break;
		if(j == 15) {
			j=2;
		}
		j++;
		cleardevice();
	}
	getch();
	closegraph();
	return 0;
}
