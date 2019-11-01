#include <genesis.h>
#include "add2.h"

int
main()
{
    u16 a,b;
    a = 0;
    b = 0;
    b = add2(a);

    if(b == 2) VDP_drawText("b is 2", 10, 13);
    else VDP_drawText("b is not 2", 10, 13);

	while(1)
	{
		//read input
		//move sprite
		//update score
		//draw current screen (logo, start screen, settings, game, gameover, credits...)
	}
    return 1;
}