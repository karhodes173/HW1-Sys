/*
 * Layout.h
 *
 *  Created on: Jan 26, 2020
 *      Author: Kenny Rhodes
 *
 */
#ifndef LAYOUT_H_
#define LAYOUT_H_
#include <stdio.h>
#include <stdlib.h>
#include "room.h"

typedef struct{
	//A graph of rooms in the house
	Room roomList;
}Layout;

int nRooms(void);

Room firstRoom(void);

void open(Room aRoom);



#endif /* LAYOUT_H_ */

