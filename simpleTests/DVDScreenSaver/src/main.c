#include <genesis.h>
#include "dvd.h"
#include "img.h"

#define UPPER -16
#define LOWER 176
#define FAR_RIGHT 256
#define FAR_LEFT 0

short dir[2];
u32 posx;
u32 posy;

int main()
{
    SYS_disableInts();

    VDP_setScreenWidth320();
    int ind = TILE_USERINDEX;
    VDP_drawImageEx(PLAN_B, &bga_image, TILE_ATTR_FULL(PAL1, FALSE, FALSE, FALSE, ind), 0, 0, FALSE, TRUE);
    ind += bga_image.tileset->numTile;

    SYS_enableInts();

    SPR_init(0,0,0);
    Sprite* dvdSprite = SPR_addSprite(&dvd, 0, 0, TILE_ATTR_FULL(PAL0, TRUE, FALSE, FALSE, ind));
    VDP_setPalette(PAL0,dvd.palette->data);
    VDP_setPalette(PAL1,bga_image.palette->data);

    dir[0] = 1;
    dir[1] = 1;

    while(1)
    {   

        posx = dir[0] ? posx + 1 : posx - 1;
        posy = dir[1] ? posy + 1 : posy - 1;
        if(posx == FAR_RIGHT) dir[0] = 0;
        else if(posx == FAR_LEFT) dir[0] = 1;
        if(posy == LOWER) dir[1] = 0;
        else if(posy == UPPER) dir[1] = 1;

        SPR_setPosition(dvdSprite, posx, posy);
        SPR_update();
        VDP_waitVSync();
    }
    return(0);
}