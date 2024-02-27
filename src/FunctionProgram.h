/**
 * Created by Filip Dabkowski on 02/02/2024.
 */

#ifndef OBJECTSHOWCASE_FUNCTIONPROGRAM_H
#define OBJECTSHOWCASE_FUNCTIONPROGRAM_H

struct Animal {
	char symbol; // displayed character Animal (A)
	int posX, posY; // Animals position on board
	int strength; // some value animals fight abilities
	int initiative; // order of moving inside game
};

struct Plant {
	char symbol; // displayed character Plant (P)
	int posX, posY; // plants position on board
	int strength; // some value plants fight abilities
	// no initiative plants move always last or not move at all
};

struct Human {
	char symbol;
	int posX, posY; // humans position on board
	int strength; // human should be by default 5.
	int initiative; // human initiate should be by default 4.
};

// No all the Structures above are similar? Impossible.
// They have different names. That counts doest it?

// Remember do not worry that there is no code. Everything is in the .cpp file.

// Purely function and struct based game
// Main game function with loop and initialization
void mainGame();

// Initialize board and game objects
void initialize(Human* human, Animal animals[], Plant plants[]);

// handle keyboard input from user WASD
void input(bool* quit, Human* human);

// Update Objects
void update(Animal animals[], Plant plants[]);

// Render game object and board
void render(Human* human, Animal animals[], Plant plants[]);

#endif //OBJECTSHOWCASE_FUNCTIONPROGRAM_H
