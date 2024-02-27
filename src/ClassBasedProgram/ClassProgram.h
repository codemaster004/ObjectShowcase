/**
 * Created by Filip Dabkowski on 02/02/2024.
 */

#ifndef OBJECTSHOWCASE_CLASSPROGRAM_H
#define OBJECTSHOWCASE_CLASSPROGRAM_H

// My "structures", don't worry for now
#include "Objects.h"


// FINALLY something with class B)

// Okay listen up.
/*
 * When you have a structure `struct Sth { int myValue; }`
 * You then do `sth.myValue` this means `myValue` is available for anyone to Read and change values.
 * You could say `myValue` is available to the public :)
 *
 * classes have `public` values and `private` values. Public values can be accessed by anyone just as in structs.
 * Private values can only be accessed by the class itself. Wait whaaaaat? Yes classes can do stuff. Uuu.
 * Classes can have *methods* basically functions inside the class. `sth.method()` uuu fancy.
 * */
class Game {
private:

public:
	Game() = default;

	void run() {

	}
};

#endif //OBJECTSHOWCASE_CLASSPROGRAM_H
