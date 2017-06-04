#pragma once
#include "game.h"
#include "player.h"
#include "ship.h"


static Ship * createFleet() {
	//bool field[10][10] = {0};
	Ship * fleet[10];
	fleet[0] = createShip(4); // ������� 4���������
	fleet[1] = createShip(3); // ������� 3���������
	fleet[2] = createShip(3); // ������� 3���������
	fleet[3] = createShip(2); // ������� 2���������
	fleet[4] = createShip(2); // ������� 2���������
	fleet[5] = createShip(2); // ������� 2���������
	fleet[6] = createShip(1); // ������� 1���������
	fleet[7] = createShip(1); // ������� 1���������
	fleet[8] = createShip(1); // ������� 1���������
	fleet[9] = createShip(1); // ������� 1���������
	return(fleet[]);
}

static Ship createShip(char ship_length) {
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
	return(Ship(stern_x, stern_y, bow_x, bow_y));
}

