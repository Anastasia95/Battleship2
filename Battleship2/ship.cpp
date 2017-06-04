#pragma once
#include "game.h"
#include "player.h"
#include "ship.h"

void setStern(char stern_x, char stern_y) {
	stern[0] = stern_x;
	stern[1] = stern_yж
};

void setBow(char bow_x, char bow_y) {
	bow[0] = bow_x;
	bow[1] = bow_y;
};

void setKilled(bool is_killed) {
	this->is_killed = is_killed;
};

void setHitted(bool is_hitted) {
	this->is_hitted = is_hitted;
};

char getStern() {
	return(stern[]); // ?? не знаю как вернуть массив значений
};

char getBow() {
	return(bow[]);
};

char length() {
	char l1 = abs(stern_x - bow_x);
	char l2 = abs(stern_y - bow_y);
	char l;
	if (l1 == 0) && (l2 != 0) { l = l2 };
	if (l1 != 0) && (l2 == 0) { l = l1 };
	if (l1 == 0) && (l2 == 0) { l = 1 };
	return (l);
}

// конструктор класса корабль??

Ship(char stern_x, char stern_y, char bow_x, char bow_y) {
	this->stern[0] = stern_x;
	this->stern[1] = stern_y;
	this->bow[0] = bow_x;
	this->bow[1] = bow_y;
	this->is_killed = 0;  //наверное надо по умолчанию задать что корабли целые ??
	this->is_hitted = 0;
}