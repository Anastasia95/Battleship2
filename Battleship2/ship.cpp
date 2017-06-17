#pragma once
#include "game.h"
#include "player.h"
#include "ship.h"

// конструктор класса корабль

Ship::Ship(char bow_x, char bow_y, char direction, char length) {
	//this->stern[0] = stern_x;
	//this->stern[1] = stern_y;
	this->bow[0] = bow_x;
	this->bow[1] = bow_y;
	this->is_killed = 0;  
	this->is_hitted = 0;
	this->direction = direction;
	this->length = length;
}

/*void Ship::setStern(char stern_x, char stern_y) {
	stern[0] = stern_x;
	stern[1] = stern_y;
}*/;

void Ship::setBow(char bow_x, char bow_y) {
	bow[0] = bow_x;
	bow[1] = bow_y;
};

void Ship::setKilled(bool is_killed) {
	this->is_killed = is_killed;
};

void Ship::setHitted(bool is_hitted) {
	this->is_hitted = is_hitted;
};

//char * Ship::getStern() {
//	return stern;
//};
// char * stern = getStern();

void Ship::setDirection(char ) {
	this->direction = direction;
};

void Ship::setLength(char length) {
	this->length = length;
}

char * Ship::getBow() {
	return bow;
};

char Ship::getDirection() {
	return direction;
};

char Ship::getLength() {
	return length;
};


//char Ship::length() {
//	char lx = abs(stern_x - bow_x) + 1;
//	char ly = abs(stern_y - bow_y) + 1;
//	char l;
//	if (lx == 1 && ly != 1) { l = ly };
//	else if (lx != 1 && ly == 1) { l = lx };
//	else if (lx == 1 && ly == 1) { l = 1 };
//	return l;
//}

