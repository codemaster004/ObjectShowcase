/**
 * @file FunctionProgram.cpp
 * @brief Implement Game of life like simulation using purely functions and structures
 * 
 * @author Filip Dabkowski
 * @date 02/02/2024
 */
#include "FunctionProgram.h"

#include <cstdio>


// Data for virtual grid
#define N_COLS 16
#define N_ROWS 8

#define N_ANIMALS 5
#define N_PLANS 10


void mainGame() {
	Animal animals[N_ANIMALS];
	Plant plant[N_PLANS]; // Not going to bother with plants, too lazy for that
	Human human{};
	initialize(&human, animals, plant);
	render(&human, animals, plant); // render the initial frame

	bool quit = false;
	while (!quit) {
		input(&quit, &human);
		update(animals, plant);
		render(&human, animals, plant); // ugh. Do I need to pass that everywhere?
	}
}

void initialize(Human* human, Animal animals[], Plant plants[]) {
	human->symbol = 'H';
	human->posX = 7;
	human->posY = 7;
	human->strength = 5;
	human->initiative = 4;

	// For simplicity lets display more or less one animal per row
	for (int i = 0; i < N_ANIMALS; ++i) { // for the record. I hate the #define here
		animals[i].symbol = 'A';
		animals[i].posX = i; // should be generated randomly however im lazy
		animals[i].posY = i; // same here
		animals[i].strength = i * 2; // even lazier
		animals[i].initiative = 5; // for simplicity use all the same value 1 higher than player
	}

	// Now here of course we add Plant objects and so on.
	// What if we have 7 more animal types and different structure for each? And 5 more plants?
	// long code...
}

void input(bool* quit, Human* human) {
	printf("Enter letter (WASD): ");
	int key = getchar();
	if (key == 'q') {
		*quit = true;
	}
	// WASD: wasabi or something
	if (key == 'a') {
		human->posX = (human->posX - 1) % N_COLS;
		if (human->posX < 0)
			human->posX += N_COLS;
	}
	if (key == 'd') {
		human->posX = (human->posX + 1) % N_COLS;
	}
	if (key == 'w') {
		human->posY = (human->posY - 1) % N_ROWS;
		if (human->posY < 0)
			human->posY += N_ROWS;
	}
	if (key == 's') {
		human->posY = (human->posY + 1) % N_ROWS;
	}
	// enter case
	getchar();
}

void update(Animal animals[], Plant plants[]) {
	for (int i = 0; i < N_ANIMALS; ++i) {
		animals[i].posX = (animals[i].posX + 1) % N_COLS;
		// yes very complicated random almost movement is here and killing mechanics
	}
	// Of course the plants are moving and doing something as well.
	// Put some glasses on, my lazy ass can see the code for that here.
}

void render(Human* human, Animal animals[], Plant plants[]) {
	const char defaultSymbol = '_';
	for (int i = 0; i < N_ROWS; ++i) {
		for (int j = 0; j < N_COLS; ++j) { // go over full board
			char symbol = defaultSymbol; // set default symbol value to show

			if (human->posY == i && human->posX == j)
				symbol = human->symbol;
			if (symbol != defaultSymbol) {
				printf(" %c ", symbol);
				continue; // if human was found on that field do not check lower initiatives.
			}

			// Now check all animals as all have lower initiative than player
			for (int iAnimal = 0; iAnimal < N_ANIMALS; ++iAnimal) { // check any animal in this pos
				if (animals[iAnimal].posY == i && animals[iAnimal].posX == j) {
					symbol = animals[iAnimal].symbol;
				}
			}
			if (symbol != defaultSymbol) {
				printf(" %c ", symbol);
				continue; // animal on pos was found. do not check any smaller initiatives
			}
			// Now imagine we check plants. Amazing imagination, good work.

			printf(" %c ", symbol);
		}
		printf("\n");
	}
}