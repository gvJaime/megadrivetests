#include <genesis.h>

#include "moon.h"

int main()
{
    VDP_setPalette(PAL1, moon.palette->data);

    VDP_drawImageEx(PLAN_A, &moon, TILE_ATTR_FULL(PAL1, 0, 0, 0, 1), 1, 1, 0, CPU);

    while(1){
        VDP_waitVSync();
    }
    return(0);
}