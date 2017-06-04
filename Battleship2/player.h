#pragma once
#include "game.h"
#include "player.h"
#include "ship.h"

class Player {
	private:
		Ship ships[10]; // изначально у игрока 10 кораблей
	public:
		char CountShips();
		Player(Ship ships[]);
}