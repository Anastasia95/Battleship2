#pragma once
#include "game.h"
#include "player.h"
#include "ship.h"


Game::Game() {
	Player player1(createFleet());
	Player player2(createFleet());
	//start_field_player1 = {0};// начальная конфигурация кораблей 1го игрока
	//start_field_player2 = {0};
	field_player1 = {0};//конфигурация кораблей противника во время игры
	field_player2 = {0};
	//
}

Game::static Ship * createFleet() {
	//Ship * fleet[10]; //массив из 10 кораблей
	//bool field[10][10] = {0}; // массив поля кораблей
	//Ship ship1 = createShip(4); 
	////fleet[0] = createShip(4); // создаем 4хпалубник
	//char * bow1 = ship1.getBow();
	//char * stern1 = ship.getStern();
	//field[bow1[0]][bow1[1]] = 1;// заполняем 1 все, что занимает на поле 4хпалубник
	//field[stern1[0][stern[1]] = 1;
	//char length1_x = bow1[0]-stern1[0];
	//if (length1_x != 0) {                  //если 4хпалубник расположен вдоль оси х
	//	field[bow1[0] + 1][bow1[1]] = 1; 
	//	field[bow1[0] + 2][bow1[1]] = 1;
	//}
	//else {                                // если 4хпалубник расположен вдоль оси у
	//	field[bow1[0]][bow1[1] + 1] = 1;
	//	field[bow1[0]][bow1[1] + 2] = 1;
	//}
	//fleet[0] = ship1; //записываем в флот 4хпалубник

	////fleet[1] = createShip(3); // создаем 3хпалубник
	//Ship ship2;
	//char * bow2;
	//char * stern2;
	//bool f2 = false; //флаг существования второго корабля
	//char length2_x = bow2[0]-stern2[0]; 
	//while(f2 == false) {   //проверяем, свободно ли поле
	//	ship2 = createShip(3);
	//	bow2 = ship2.getBow();
	//	stern2 = ship2.getStern();
	//	if (field[bow2[0]][bow2[1]] == 0 && field[stern2[0]][stern2[1]] == 0) {
	//		if (length2_x != 0) {
	//			if (field[bow2[0] + 1][bow2[1] == 0) {
	//				field[bow2[0]][bow2[1]] = 1;
	//				field[stern2[0]][stern2[1]] = 1;
	//				field[bow2[0] + 1][bow2[1] = 1;
	//				f2 = true;
	//			}
	//		}
	//		else {
	//			if (field[bow2[0]][bow2[1] + 1] == 0) {
	//				field[bow2[0]][bow2[1]] = 1;
	//				field[stern2[0]][stern2[1]] = 1;
	//				field[bow2[0]][bow2[1] + 1] = 1;
	//				f2 = true;
	//		}
	//	}
	//}
	//if (f2) {
	//	fleet[1] = ship2;
	//}
	//
	////fleet[2] = createShip(3); // создаем 3хпалубник
	//Ship ship3;
	//char * bow3;
	//char * stern3;
	//bool f3 = false;
	//char length3_x = bow3[0]-stern3[0]; 
	//while(f3 == false) {   //проверяем, свободно ли поле
	//	ship3 = createShip(3);
	//	bow3 = ship3.getBow();
	//	stern3 = ship3.getStern();
	//	if (field[bow3[0]][bow3[1]] == 0 && field[stern3[0]][stern3[1]] == 0) {
	//		if (length3_x != 0) {
	//			if (field[bow3[0] + 1][bow3[1] == 0) {
	//				field[bow3[0]][bow3[1]] = 1;
	//				field[stern3[0]][stern3[1]] = 1;
	//				field[bow3[0] + 1][bow3[1] = 1;
	//				f3 = true;
	//			}
	//		}
	//		else {
	//			if (field[bow3[0]][bow3[1] + 1] == 0) {
	//				field[bow3[0]][bow3[1]] = 1;
	//				field[stern3[0]][stern3[1]] = 1;
	//				field[bow3[0]][bow3[1] + 1] = 1;
	//				f3 = true;
	//		}
	//	}
	//}
	//if (f3) {
	//	fleet[2] = ship3;
	//}

	////fleet[3] = createShip(2); // создаем 2хпалубник
	//Ship ship4;
	//char * bow4;
	//char * stern4;
	//bool f4 = false;
	//while (f4 == false) {
	//	ship4 = createShip(2);
	//	bow4 = ship4.getBow();
	//	stern4 = ship4.getStern();
	//	if (field[bow4[0]][bow4[1]] == 0 && field[stern4[0]][stern4[1]] == 0 && field[][] == 0 && fie) {
	//		field[bow4[0]][bow4[1]] = 1;
	//		field[stern4[0]][stern4[1]] = 1;
	//		f4 = true;
	//	}
	//}
	//if (f4) {
	//	fleet[3] = ship4;
	//}
	
	char * field[10][10] = {0};
	//fleet[0] = createShip(4, field);
	Ship ship1 = createShip(4, field);
	fleet[0] = ship1;
	char * bow1 = ship1.getBow();
	char * stern1 = ship1.getStern();
	field[bow1[0]][bow1[1]] = 1;// заполняем 1 все, что занимает на поле 4хпалубник
	field[stern1[0][stern[1]] = 1;
	if (bow1[0] - 1 >= 0 ) { // && bow1[1] - 1 >= 0) {
	field[bow1[0]-1][bow1[1]] = 2; //влево
		if (bow1[1] + 1 <= 9) {
			field[bow1[0]-1][bow1[1]+1] = 2;//влево вниз
		}
	}
	if (bow1[1] + 1 <= 9) {
			field[bow1[0]][bow1[1]-1] = 2;//вниз
		}
	char length1_x = bow1[0]-stern1[0];
	if (length1_x != 0) {                  //если 4хпалубник расположен вдоль оси х
		field[bow1[0] + 1][bow1[1]] = 1; 
		field[bow1[0] + 2][bow1[1]] = 1;
		if (bow1[1]+1 <= 9) {
			field[bow1[0]+1][bow] = 2;
	}
	else {                                // если 4хпалубник расположен вдоль оси у
		field[bow1[0]][bow1[1] + 1] = 1;
		field[bow1[0]][bow1[1] + 2] = 1;
	}


	fleet[1] = createShip(3, field);
	fleet[2] = createShip(3, field);
	fleet[3] = createShip(2, field);
	fleet[4] = createShip(2, field); // создаем 2хпалубник
	fleet[5] = createShip(2, field); // создаем 2хпалубник
	fleet[6] = createShip(1, field); // создаем 1хпалубник
	fleet[7] = createShip(1, field); // создаем 1хпалубник
	fleet[8] = createShip(1, field); // создаем 1хпалубник
	fleet[9] = createShip(1, field); // создаем 1хпалубник
	return fleet;
}

Game::static Ship createShip(char ship_length, char * field) {
	//bool field[10][10] = {0};
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
	return Ship(stern_x, stern_y, bow_x, bow_y);
}

Game::void run() {
	// делает ходы makeMove
	//первым начинает ходить player1
	char * move_coordinates[] = makeMove();
	bow_x = Ship::getBow[0]// как мне взять только одно значение...
}

//bool * makeMove() {  //сделать ход (сгенерить х и у удара. получить ответ - убит / ранен)
//	move_x = rand() % 9 + 0;
//	move_y = rand() % 9 + 0;
//
//}

Game::char * makeMove() {
	char * move_coordinates[2];
	move_coordinates[0] = rand() % 9 + 0;
	move_coordinates[1] = rand() % 9 + 0;
	return move_coordinates;
}

