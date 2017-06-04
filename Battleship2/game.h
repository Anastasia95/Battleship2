#pragma once
#include "game.h"
#include "player.h"
#include "ship.h"

class Game {
	private:
		Player players[2];
		// дописать вторую доску для игроков
	public:
		static Ship * createFleet(); // создаем флот
		static Ship createShip(char ship_length); //создать корабль
		void run();
		//bool * makeMove(); //сделать ход (сгенерить х и у удара. получить ответ - убит / ранен)
		char * makeMove();
		Game();
}