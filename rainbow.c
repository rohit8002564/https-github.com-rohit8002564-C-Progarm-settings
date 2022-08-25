#include <stdlib.h>
#include <graphics.h>
#include <dos.h>

int main()
{
	/* request auto detection */

	int gdriver = DETECT,gmode;
	int x, y, i;
	    intgraph(&gdriver,&gmode," c:\\turboc3\\ bgi");
	    x=getmaxx()/2;
	    y=getmaxx()/2;
	    for(i=30; i<200; i++)
	    {
	    	delay(100);
	    	setcolor(i/10);
	    	arc(x,y,0,180,i-10);
	    }

return 0;
}
