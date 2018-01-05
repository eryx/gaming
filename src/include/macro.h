#ifndef __MACRO_H_
#define __MACRO_H_

#include <stdlib.h>

/**************************************************************************
###########################################################################
*
*		Type & Enum Def	
*
###########################################################################
**************************************************************************/

/**************************************************************************
###########################################################################
*
*		Macro Def	
*
###########################################################################
**************************************************************************/

#define REALLOC(type,array,size){\
	type* ptmp0=realloc(array,sizeof(type)*size);\
	if(ptmp0==NULL)\
	{free(array);\
		fprintf(stderr,"Allocation error in %s %d\n",__func__,__LINE__);\
		exit(EXIT_FAILURE);}\
	array=ptmp0;\
}
 
#define ALLOC(ptrType,ptrVarr,ptrSize){ptrVarr=(ptrType*)malloc(sizeof(ptrType) *(ptrSize));\
	if(ptrVarr == NULL){fprintf(stderr,"Allocation Error in %s at %s:%d\n",__FILE__,__func__,__LINE__);exit(1);}}

#define MSG_EXIT(msg,exit_val){fprintf(stderr,"%s\n",msg);exit(exit_val);}

#define BKP_DIE(msg,exit_val){fprintf(stderr,"DIE [%s -> %s : %d] -> %s\n",__FILE__,__func__,__LINE__,msg);exit(exit_val);}

#define M_ABS_MAX(x,y)((abs(x) > (abs(y))? abs(x) : abs(y)))

/**************************************************************************
###########################################################################
*
*		Structures Def	
*
###########################################################################
**************************************************************************/

/**************************************************************************
###########################################################################
*
*		Functions Def	
*
###########################################################################
**************************************************************************/

#endif

