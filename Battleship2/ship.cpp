#pragma once
#include "game.h"
#include "player.h"
#include "ship.h"

void setStern(char stern_x, char stern_y) {
	stern[0] = stern_x;
	stern[1] = stern_y;
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

char* getStern() {
	return stern; // ?? не знаю как вернуть массив значений
};
// char * stern = getStern();

char getBow() {
	return(bow[]);
};

char length() {
	char lx = abs(stern_x - bow_x) + 1;
	char ly = abs(stern_y - bow_y) + 1;
	char l;
	if (lx == 1 && ly != 1) { l = ly };
	else if (lx != 1 && ly == 1) { l = lx };
	else if (lx == 1 && ly == 1) { l = 1 };
	return l;
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