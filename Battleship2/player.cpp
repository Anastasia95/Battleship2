#pragma once
#include "game.h"
#include "player.h"
#include "ship.h"

char CountShips() {
	char count = 0;
	for (char i = 0; i < 10; i++) {
		if ((ships[i].is_killed == 0) && (ships[i].is_hitted == 0)) { // ����� �� ��� � �������� �������� ����������??
			count++;
		}
	}
	return(count);
};

//����������� ������
Player(Ship ships[]) {
	this->ships = ships;
	//Player(createFleet()) - inside Game.cpp
}