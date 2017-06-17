#pragma once
#include "game.h"
#include "player.h"
#include "ship.h"

class Game {
	private:
		Player players[2];
		//bool * start_field_player1;// начальная конфигурация кораблей 1го игрока
		//bool * start_field_player2;
		//bool * field_player1;//конфигурация кораблей противника во время игры
		//bool * field_player2;
		// дописать вторую доску для игроков
	public:
		Game();
		static Ship * createFleet(bool * field); // создаем флот
		static Ship createShip(char ship_length, bool * field); //создать корабль
		//static Ship createShip(char ship_length); //создать корабль
		void run();
		//bool * makeMove(); //сделать ход (сгенерить х и у удара. получить ответ - убит / ранен)
		char * makeMove();
}