 /*
 * exe4.c
 *
 *  Created on: 09 ott 2017
 *      Author: Saverio P. Zangaro
 */

#include"../header/exe.h"

static int s_num; //Static variable keeps its status.

void f4(int s_start)
{
	s_num=s_num+s_start;
	printf("Il numero è:%d\n",s_num);
}

