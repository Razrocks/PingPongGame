#include "game.h"


void Game::update() {
		

}


void Game::createPaddle() {
	p1 = { 0, 3, '|' };

}


void Game::createMap(){
	for (int i = 0; i < LENGTH; i++) {
		for (int j = 0; j < WIDTH; j++) {
			if (i == 0 || i == LENGTH - 1) {
				arraymap[i][j] = '-';
			}
			else if (j == 0 || j == WIDTH - 1) {
				arraymap[i][j] = '|';
			}
			else {
				arraymap[i][j] = ' ';
			}
		}
	}
}

void Game::render() {
	for (int i = 0; i < LENGTH; i++) {
		for (int j = 0; j < WIDTH; j++) {
			std::cout << arraymap[i][j];
		}
		std::cout << "\n";
	}
}

void Game::gameloop(){
	while (running) {
		system("cls");
		update();
		render();
		Sleep(250);
	}
}
