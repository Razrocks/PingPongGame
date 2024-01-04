#include <Windows.h>
#include "game.h"

class Ball {

};

int main() {
	Game* game = new Game();
	game->createMap();
	game->running = true;
	game->gameloop();
	return 0;
};


