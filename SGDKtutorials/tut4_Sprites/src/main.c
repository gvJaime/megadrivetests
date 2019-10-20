#include <genesis.h>
#include "sprite.h"

int main()
{
    VDP_loadTileData( (const u32 *)spriteTiles, 1, 4, 0);

    VDP_setSprite(0, 40, 40, SPRITE_SIZE(2,2), TILE_ATTR_FULL(PAL0,1,0,0,1));


    while(1)
    {
        VDP_updateSprites(0, TRUE);
        VDP_waitVSync();
    }
}