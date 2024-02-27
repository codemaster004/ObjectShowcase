/**
 * @file Objects.cpp
 * @brief [Description of file]
 * 
 * @author Filip Dabkowski
 * @date 02/02/2024
 */
#include "Objects.h"

#include <cstdio>


// This is this method/function `void showMyself()`
// what's up with this stupid `COrganism::`?
// this tells the C++ that this function is not a general function.
// this is a function that belongs to `COrganism` class. A method.
void COrganism::showMyself() {
	// ohhhhh no, what is this `this`?
	printf(" %c ", this->symbol);
	// calm down, it is just here to help you. It is just a pointer to myself
	// it helps you access your private parts...
	// *variable, private variables.

	// you can go back now, Go meet my children :)
}


