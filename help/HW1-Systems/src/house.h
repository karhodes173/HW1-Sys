/*
 * house.h
 *
 *  Created on: Jan 26, 2020
 *      Author: Kenny Rhodes
 *
 */
#ifndef HOUSE_H_
#define HOUSE_H_
#include <stdio.h>
#include <stdlib.h>
#include "room.h"
#include "layout.h"

typedef struct{
	Layout aMap;
}House;

int countRooms(Layout aLayout);

Room getFirstRoom(Layout aLayout);

int nRooms(Layout aLayout);

Room aRoom(Layout aLayout);

#endif /* HOUSE_H_ */


