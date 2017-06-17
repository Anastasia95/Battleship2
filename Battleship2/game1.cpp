#pragma once
#include "game.h"
#include "player.h"
#include "ship.h"


Game::Game() {
	Player player1(createFleet());
	Player player2(createFleet());
	//start_field_player1 = {0};// ��������� ������������ �������� 1�� ������
	//start_field_player2 = {0};
	field_player1 = {0};//������������ �������� ���������� �� ����� ����
	field_player2 = {0};
	//
}

Game::static Ship * createFleet() {
	//Ship * fleet[10]; //������ �� 10 ��������
	//bool field[10][10] = {0}; // ������ ���� ��������
	//Ship ship1 = createShip(4); 
	////fleet[0] = createShip(4); // ������� 4���������
	//char * bow1 = ship1.getBow();
	//char * stern1 = ship.getStern();
	//field[bow1[0]][bow1[1]] = 1;// ��������� 1 ���, ��� �������� �� ���� 4���������
	//field[stern1[0][stern[1]] = 1;
	//char length1_x = bow1[0]-stern1[0];
	//if (length1_x != 0) {                  //���� 4��������� ���������� ����� ��� �
	//	field[bow1[0] + 1][bow1[1]] = 1; 
	//	field[bow1[0] + 2][bow1[1]] = 1;
	//}
	//else {                                // ���� 4��������� ���������� ����� ��� �
	//	field[bow1[0]][bow1[1] + 1] = 1;
	//	field[bow1[0]][bow1[1] + 2] = 1;
	//}
	//fleet[0] = ship1; //���������� � ���� 4���������

	////fleet[1] = createShip(3); // ������� 3���������
	//Ship ship2;
	//char * bow2;
	//char * stern2;
	//bool f2 = false; //���� ������������� ������� �������
	//char length2_x = bow2[0]-stern2[0]; 
	//while(f2 == false) {   //���������, �������� �� ����
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
	////fleet[2] = createShip(3); // ������� 3���������
	//Ship ship3;
	//char * bow3;
	//char * stern3;
	//bool f3 = false;
	//char length3_x = bow3[0]-stern3[0]; 
	//while(f3 == false) {   //���������, �������� �� ����
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

	////fleet[3] = createShip(2); // ������� 2���������
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
	field[bow1[0]][bow1[1]] = 1;// ��������� 1 ���, ��� �������� �� ���� 4���������
	field[stern1[0][stern[1]] = 1;
	if (bow1[0] - 1 >= 0 ) { // && bow1[1] - 1 >= 0) {
	field[bow1[0]-1][bow1[1]] = 2; //�����
		if (bow1[1] + 1 <= 9) {
			field[bow1[0]-1][bow1[1]+1] = 2;//����� ����
		}
	}
	if (bow1[1] + 1 <= 9) {
			field[bow1[0]][bow1[1]-1] = 2;//����
		}
	char length1_x = bow1[0]-stern1[0];
	if (length1_x != 0) {                  //���� 4��������� ���������� ����� ��� �
		field[bow1[0] + 1][bow1[1]] = 1; 
		field[bow1[0] + 2][bow1[1]] = 1;
		if (bow1[1]+1 <= 9) {
			field[bow1[0]+1][bow] = 2;
	}
	else {                                // ���� 4��������� ���������� ����� ��� �
		field[bow1[0]][bow1[1] + 1] = 1;
		field[bow1[0]][bow1[1] + 2] = 1;
	}


	fleet[1] = createShip(3, field);
	fleet[2] = createShip(3, field);
	fleet[3] = createShip(2, field);
	fleet[4] = createShip(2, field); // ������� 2���������
	fleet[5] = createShip(2, field); // ������� 2���������
	fleet[6] = createShip(1, field); // ������� 1���������
	fleet[7] = createShip(1, field); // ������� 1���������
	fleet[8] = createShip(1, field); // ������� 1���������
	fleet[9] = createShip(1, field); // ������� 1���������
	return fleet;
}

Game::static Ship createShip(char ship_length, char * field) {
	//bool field[10][10] = {0};
	char direction = rand() % 2 + 1; //���� ����������� = 1, �� ������� ���� ����� (�����������), 2 - ������ (�������������)
	char f = 0; //���� ������������� �������
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
	// ������ ���� makeMove
	//������ �������� ������ player1
	char * move_coordinates[] = makeMove();
	bow_x = Ship::getBow[0]// ��� ��� ����� ������ ���� ��������...
}

//bool * makeMove() {  //������� ��� (��������� � � � �����. �������� ����� - ���� / �����)
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

