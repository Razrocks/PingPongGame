#pragma once
#include <iostream>
#include <Windows.h>
#include "paddle.h"

#define WIDTH 75
#define LENGTH 28

class Game {
public:
	Paddle p1;
	Paddle p2;
	char arraymap[LENGTH][WIDTH];
	bool running;

	void createMap();
	void render();
	void gameloop();
	void update();

	void createPaddle();
};
