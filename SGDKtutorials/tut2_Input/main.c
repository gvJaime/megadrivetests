#include <genesis.h>

#define A_TEXT_X 6
#define A_TEXT_Y 2
#define B_TEXT_X 6
#define B_TEXT_Y 3
#define C_TEXT_X 6
#define C_TEXT_Y 4
#define X_TEXT_X 6
#define X_TEXT_Y 5
#define Y_TEXT_X 6
#define Y_TEXT_Y 6
#define Z_TEXT_X 6
#define Z_TEXT_Y 7

void myJoyHandler( u16 joy, u16 changed, u16 state)
{
	if (joy == JOY_1)
	{
		if (state & BUTTON_A)
		{
			VDP_drawText("player 1 pressed A button ", A_TEXT_X, A_TEXT_Y);
		}
		else if (changed & BUTTON_A)
		{
			VDP_drawText("player 1 released A button", A_TEXT_X, A_TEXT_Y);
		}
		if (state & BUTTON_B)
		{
			VDP_drawText("player 1 pressed B button ", B_TEXT_X, B_TEXT_Y);
		}
		else if (changed & BUTTON_B)
		{
			VDP_drawText("player 1 released B button", B_TEXT_X, B_TEXT_Y);
		}
		if (state & BUTTON_C)
		{
			VDP_drawText("player 1 pressed C button ", C_TEXT_X, C_TEXT_Y);
		}
		else if (changed & BUTTON_C)
		{
			VDP_drawText("player 1 released C button", C_TEXT_X, C_TEXT_Y);
		}
		if (state & BUTTON_X)
		{
			VDP_drawText("player 1 pressed X button ", X_TEXT_X, X_TEXT_Y);
		}
		else if (changed & BUTTON_X)
		{
			VDP_drawText("player 1 released X button", X_TEXT_X, X_TEXT_Y);
		}
		if (state & BUTTON_Y)
		{
			VDP_drawText("player 1 pressed Y button ", Y_TEXT_X, Y_TEXT_Y);
		}
		else if (changed & BUTTON_Y)
		{
			VDP_drawText("player 1 released Y button", Y_TEXT_X, Y_TEXT_Y);
		}
		if (state & BUTTON_Z)
		{
			VDP_drawText("player 1 pressed Z button ", Z_TEXT_X, Z_TEXT_Y);
		}
		else if (changed & BUTTON_Z)
		{
			VDP_drawText("player 1 released Z button", Z_TEXT_X, Z_TEXT_Y);
		}
	}
}

int main( )
{
	VDP_drawText("player 1 released A button", A_TEXT_X, A_TEXT_Y);
	VDP_drawText("player 1 released B button", B_TEXT_X, B_TEXT_Y);
	VDP_drawText("player 1 released C button", C_TEXT_X, C_TEXT_Y);
	VDP_drawText("player 1 released X button", X_TEXT_X, X_TEXT_Y);
	VDP_drawText("player 1 released Y button", Y_TEXT_X, Y_TEXT_Y);
	VDP_drawText("player 1 released Z button", Z_TEXT_X, Z_TEXT_Y);

	JOY_init();
	JOY_setEventHandler( &myJoyHandler );

	while(1)
	{
		VDP_waitVSync();
	}
	return 0;
}
