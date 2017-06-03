#pragma once
#include "game.h"
#include "player.h"
#include "ship.h"

		char stern[2]; //корма
		char bow[2]; //нос корабля
		bool is_killed, is_hitted; //убит или ранен
		void setStern(char stern_x, char stern_y);
		void setBow(char bow_x, char bow_y);
		void setKilled(is_killed);
		void setHitted(is_hitted);
		char * getStern();
		char * getBow();
		bool isKilled();
		bool isHitted();
		char length();
		Ship(char stern_x, char stern_y, char bow_x, char bow_y);

void setStern(char stern_x, char stern_y) {
	stern[0] = stern_x;
	stern[1] = stern_y
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
	return(stern[]);
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