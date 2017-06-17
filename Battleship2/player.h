#pragma once
#include "constants.h"
#include "ship.h"

class Player {
	private:		
		Ship ships[NUM_OF_SHIPS]; // ���������� � ������ 10 ��������
		char battlefield[FIELD_SIZE][FIELD_SIZE];
		char opponent_field[FIELD_SIZE][FIELD_SIZE];
	public:
		Player(Ship ships[]);
		char countShips();
		void makeMove();
}