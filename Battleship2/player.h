#pragma once
#include "game.h"
#include "player.h"
#include "ship.h"

class Player {
	private:
		Ship ships[10]; // ���������� � ������ 10 ��������
	public:
		char CountShips();
		Player(Ship ships[]);
}