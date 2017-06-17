#pragma once
#include "game.h"
#include "player.h"
#include "ship.h"

class Player {
	private:
		Ship ships[10]; // изначально у игрока 10 кораблей
		char battlefield[10][10];
		char opponent_field[10][10];
	public:
		Player(Ship ships[]);
		char CountShips();
		void makeMove();
}