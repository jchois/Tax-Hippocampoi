#ifndef _hipo_
#define _hipo_

/* LIBRARIES */
#include <stdio.h>
#include <stdlib.h>

/* STRUCTURES */
typedef struct hipostation
{
	char *name;
	char *NIC;
	char *patent;
	int status;
	int carboot;
} station;

/* PROTOTYPES */
int main(void);
void optionSelector(void);
void slct(int);

#endif
