/*
 * search.h
 *
 *  Created on: Jan 26, 2020
 *      Author: Kenny Rhodes
 *
 */
#include <stdio.h>
#include <stdlib.h>
#ifndef SEARCH_H_
#define SEARCH_H_
#include "house.h"
#include <stdbool.h>


int getNumberOfRooms(House aHouse);
Room getNewRoom(House aHouse);


bool haveTreasure(Room aRoom);


#endif /* SEARCH_H_ */
