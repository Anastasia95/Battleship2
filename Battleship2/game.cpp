#pragma once
#include "game.h"
#include "player.h"
#include "ship.h"


static Ship * createFleet() {
	//bool field[10][10] = {0};
	Ship * fleet[10];
	fleet[0] = createShip(4); // создаем 4хпалубник
	fleet[1] = createShip(3); // создаем 3хпалубник
	fleet[2] = createShip(3); // создаем 3хпалубник
	fleet[3] = createShip(2); // создаем 2хпалубник
	fleet[4] = createShip(2); // создаем 2хпалубник
	fleet[5] = createShip(2); // создаем 2хпалубник
	fleet[6] = createShip(1); // создаем 1хпалубник
	fleet[7] = createShip(1); // создаем 1хпалубник
	fleet[8] = createShip(1); // создаем 1хпалубник
	fleet[9] = createShip(1); // создаем 1хпалубник
	return(fleet[]);
}

static Ship createShip(char ship_length) {
	char direction = rand() % 2 + 1; //если направление = 1, то корабль идет вверх (вертикально), 2 - вправо (горизонтально)
	char f = 0; //флаг существования корабля
	char bow_x, bow_y, stern_x, stern_y;
	while(f == 0) {
		bow_x = rand() % 9 + 0;
		bow_y = rand() % 9 + 0;
		switch (direction) {
			case 1:
				if (bow_y - ship_length >= 0) {
					stern_y = bow_y - ship_length;
					stern_x = bow_x;
					f++;
				}
			case 2:
				if (bow_x + ship_length <= 9) {
					stern_y = bow_y;
					stern_x = bow_x + ship_length;
					f++;
				}
	}
	return(Ship(stern_x, stern_y, bow_x, bow_y));
}

void run() {
	// делает ходы makeMove
	//первым начинает ходить player1
	char * move1[] = movemakeMove();
	bow_x = Ship::getBow[0]// как мне взять только одно значение...
}

//bool * makeMove() {  //сделать ход (сгенерить х и у удара. получить ответ - убит / ранен)
//	move_x = rand() % 9 + 0;
//	move_y = rand() % 9 + 0;
//
//}

char * makeMove() {
	move_x = rand() % 9 + 0;
	move_y = rand() % 9 + 0;
	return(move_x, move_y);
}

Game() {
	Ship * ships_player1 = createFleet();
	Ship * ships_player2 = createFleet();
	Player player1(ships_player1);
	Player player2(ships_player2);
}