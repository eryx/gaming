#ifndef __BLUKPAST_H_
#define __BLUKPAST_H_

#include "struct.h"

/*********************************************************************
 * Defines 
*********************************************************************/

/*********************************************************************
 * Type def & enum
*********************************************************************/

/*********************************************************************
 * Macro 
*********************************************************************/

/*********************************************************************
 * Struct 
*********************************************************************/

/*********************************************************************
 * Global 
*********************************************************************/

extern BKP_Screen * Screen;
extern BKP_Hud * Hud;
extern BKP_GlobalTexture * BKP_GT; 
extern BKP_GlobalFX* BKP_FX; 
extern LAgent * BKP_Players;
extern LAgent * BKP_NPC;
extern LAimg * BKP_AimgPlan[BKP_MAX_PLAN + 2];

/*********************************************************************
 * Struct 
*********************************************************************/

/*********************************************************************
 * Functions 
*********************************************************************/

int bkp_init(int W,int H,int fullscreen,const char * appname);
void bkp_shutdown();
SDL_Texture *bkp_loadImage(const char *path);
void bkp_updateAimg(Agent *a);


#endif
