/*
 * room.h
 *
 *  Created on: Jan 26, 2020
 *      Author: Kenny Rhodes
 */
#ifndef ROOM_H_
#define ROOM_H_
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct{
	bool open;
	bool hasTreasure;
}Room;

bool ok(void);


#endif /* ROOM_H_ */
