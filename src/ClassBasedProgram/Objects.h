/**
 * Created by Filip Dabkowski on 02/02/2024.
 */

#ifndef OBJECTSHOWCASE_OBJECTS_H
#define OBJECTSHOWCASE_OBJECTS_H

/*
 * Let's just say everything, Plant, Animal, Human is an Organism.
 * and all the common values go here. #noRepeatibleCode
 * */
class COrganism {
protected: // protected is almost the same as private, be quiet.

	// I am very insecure and I don't like others.
	// I would allow anyone to look under my eee cloths.
	// *code, my code.
	// and of course no touching is allowed.

	char symbol; // displayed character of ANY Organism
	int posX, posY; // Organism position X, Y
	int strength; // every organism may have some strength
	int initiative; // and some initiative

public:
	// Now so what can anyone do with me?
	// Well I should for sure be able to show myself.
	// maybe do something like kill someone, or go somewhere

	// those are methods, say hi. You WILL BE friends.

	// maybe someone will try to guess where in world am I.
	bool isAtPos(int checkX, int checkY) { // you can write code here on in .cpp file
		// don't be sacred, this is just a function.

		// see I myself can look into myself and see my position,
		// a public person can only guess.
		bool guessed = (checkX == posX && checkY == posY);
		return guessed;
	}

	// this method is declared in the .cpp file. Fancy, go and see!
	void showMyself();

	// virtual, not real stuff, if you think that a method (function) will be
	// very different for every child of this class, you may make the method "virtual"
	// then every child can be unique and do this method differently.
	virtual void update() {};
};


// no, no don't run, its easy, I promise.
// remember Animal is an Organism.
// class `CAnimal` is basically the same as its parent `COrganism`
class CAnimal : public COrganism {
public:
	// ohhhh my gosh why this function does not have a type?
	// I'm glad you asked.
	// this is a special method. called *constructor*
	// it is called automatically only when you create the instance of your class
	// remember the line with `Game classyGame = Game();`
	// it called the constructor for Game class.
	CAnimal() {
		symbol = 'A'; // my parent has a variable symbol, I am his child.
		// I also have a variable symbol.
		initiative = 5; // every Animal by default lets say has initiative 5
	}
};

#endif //OBJECTSHOWCASE_OBJECTS_H
