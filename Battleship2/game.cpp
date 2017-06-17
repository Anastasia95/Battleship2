#include "game.h"

Game::Game() {
	Player player1 = createPlayer();
	Player player2 = createPlayer();
	//
}

static Game::Ship * createFleet() {

	// TODO: меняем на createPlayer(). Логику не трогаем (если она конечно правильная). После создания
	// и расстановки кораблей отдаем массив кораблей конструктору Player и затем сетим его батлфилд.
	// Делаем return player.

	Ship fleet[NUM_OF_SHIPS]; //массив из 10 кораблей
	char field[FIELD_SIZE][FIELD_SIZE] = {{0}, {0}}; // массив поля кораблей
	Ship ship1 = createShip(4); // создаем 4хпалубник
	char * bow1 = ship1.getBow();
	fillField(bow1, direction, length, field); // это что за функция? не нашел объявления
	fleet[0] = ship1;

	// Дальше не смотрел, но походу там дичь какая-то, надо разобраться!
	
	Ship ship2 = createShip(3);// создаем 3хпалубник
	char * bow2 = ship2.getBow();
	bool f2 = 0; //флаг существования корабля
	while (!f2) {

	}

	fleet[4] = createShip(2); // создаем 2хпалубник
	fleet[5] = createShip(2); // создаем 2хпалубник
	fleet[6] = createShip(1); // создаем 1хпалубник
	fleet[7] = createShip(1); // создаем 1хпалубник
	fleet[8] = createShip(1); // создаем 1хпалубник
	fleet[9] = createShip(1); // создаем 1хпалубник
	return fleet;
}

static Game::Ship createShip(char ship_length) {
	//bool field[10][10] = {0};
	char direction = rand() % 2 + 1; //если направление = 1, то корабль идет вверх (вертикально), 2 - вправо (горизонтально)
	bool f = 0; //флаг существования корабля
	char bow_x, bow_y; //, stern_x, stern_y;
	while(!f) {
		bow_x = rand() % 9 + 0;
		bow_y = rand() % 9 + 0;
		switch (direction) {
			case 1:
				if (bow_y - ship_length >= 0) {
					/*stern_y = bow_y - ship_length;
					stern_x = bow_x;*/
					f=1;
				}
			case 2:
				if (bow_x + ship_length <= 9) {
					/*stern_y = bow_y;
					stern_x = bow_x + ship_length;*/
					f=1;
				}
	}
	return Ship(bow_x, bow_y, direction, ship_length);
}

void Game::run() {
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

char * Game::makeMove() {
	char * move_coordinates[2];
	move_coordinates[0] = rand() % 9 + 0;
	move_coordinates[1] = rand() % 9 + 0;
	return move_coordinates;
};

void Game::fillField(char * bow, char direction, char length, char ** field) {
	//заполним поле 2 там где нельзя будет ставить другие корабли
	//field[bow1[0]][bow1[1]] = 1;// заполняем 1 все, что занимает на поле 4хпалубник
	//switch (direction)
	//	case: 1 {
	//		field[bow1[0]][bow1[1]-1] = 1;//вверх
	//		field[bow1[0]][bow1[1]-2] = 1;
	//		field[bow1[0]][bow1[1]-3] = 1;
	//		}
	//	case: 2 {
	//		field[bow1[0]+1][bow1[1]] = 1;//вправо
	//		field[bow1[0]+2][bow1[1]] = 1;
	//		field[bow1[0]+3][bow1[1]] = 1;
	//		  }
			/*if (bow1[1] - 4 >= 0) {
				field[bow1[0]-4][bow1[1]] = 2;
				if (bow1[0] - 1 >= 0) {
					field[bow1[0] - 1][bow1[1] - 4] = 2;
				};
				if (bow1[0] + 1 <= 9) {
					field[bow1[0] + 1][bow1[1] - 4] = 2;
				}
			}*/
};
