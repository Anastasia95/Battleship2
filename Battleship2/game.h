#pragma once
#include "player.h"

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
		static Ship * createFleet(); // создаем флот
		// TODO: createFleet поменять на createPlayer и возвращать не Ship*, а Player
		static Ship createShip(char ship_length); //создать корабль
		void run();
		char * makeMove();
}