/*
 ============================================================================
 Name        : HW1-Systems.c
 Author      : Kenny RHodes
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "tests.h"
#include "production.h"
#include "karhodes.h"

int main(int argc, char* argv[]) {
	puts("Let's get started with HW1");
	if(tests())
	{
		production(argc, argv);
		puts("tests worked");
	}
	else
	{
		puts("tests failed");
	}
	return EXIT_SUCCESS;
}
