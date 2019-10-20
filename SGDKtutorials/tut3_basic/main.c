#include <genesis.h>

#include "grafx.h"
#define TILE_ADDR 2
#define TILE_X 5
#define TILE_Y 5

int main(){


    VDP_loadTileData( (const u32 *)tile, TILE_ADDR ,1 ,0);

    VDP_setTileMapXY(PLAN_A, TILE_ATTR_FULL(PAL1, 1, 0, 0, TILE_ADDR), 7, 7);
	VDP_setTileMapXY(PLAN_B, TILE_ATTR_FULL(PAL2, 0, 0, 0, TILE_ADDR), 7, 7);
	VDP_setTileMapXY(PLAN_A, TILE_ATTR_FULL(PAL1, 0, 0, 0, TILE_ADDR), 8, 7);
	VDP_setTileMapXY(PLAN_B, TILE_ATTR_FULL(PAL2, 1, 0, 0, TILE_ADDR), 8, 7);
	
    while(1){
        VDP_waitVSync();
    }
    return(0);
}