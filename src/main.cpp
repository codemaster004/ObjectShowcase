
// Start by reading thought the function implementation.
#include "FunctionProgram.h"

// After you are done and understood what is happening, check out the classy version.
#include "ClassBasedProgram/ClassProgram.h"

#include <cstdio>


int main() {
	const bool useClasses = false;
	if (!useClasses) {
		mainGame();
	} else {
		// Class is basically a structure.
		// declare a variable of name 'classyGame' and type 'Game'
		// teh variable has a new instance of Game() <- with no initial values
		Game classyGame = Game();
	}
}
