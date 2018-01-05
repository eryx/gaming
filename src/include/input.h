#ifndef __INPUT_H_
#define __INPUT_H_

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

/*********************************************************************
 * Struct 
*********************************************************************/

/*********************************************************************
 * Functions 
*********************************************************************/

void bkp_InputInit(BKP_Input *input);
void bkp_resetkeys(BKP_Input *p);
void bkp_InputCapture(BKP_Input * p);
void bkp_InputMouseCapture(BKP_Input * p);

#endif
