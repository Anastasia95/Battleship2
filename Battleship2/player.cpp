#include "player.h"

//конструктор игрока
Player::Player(Ship ships[]) {
	this->ships = ships;
	battlefield = {{0}, {0}};
	opponent_field = {{0}, {0}};
}

char Player::countShips() {
	char count = 0;
	for (char i = 0; i < NUM_OF_SHIPS; i++) {
		if (!ships[i].isKilled()) count++;
	}
	return count;
};

void Player::setBattlefield(char ** battlefield) {
	this->battlefield = battlefield;
}
