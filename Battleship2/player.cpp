#pragma once
#include "game.h"
#include "player.h"
#include "ship.h"

//конструктор игрока
Player::Player(Ship ships[]) {
	this->ships = ships;
	battlefield = {0};
	opponent_field = {0};
}

char Player::CountShips() {
	char count = 0;
	for (char i = 0; i < 10; i++) {
		if ((!ships[i].is_killed) && (!ships[i].is_hitted)) { 
			count++;
		}
	}
	return count;
};

void Player::setBattlefield(char ** battlefield) {
	this->battlefield = battlefield;
}
