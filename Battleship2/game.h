#pragma once
#include "player.h"

class Game {
	private:
		Player players[2];
		//bool * start_field_player1;// ��������� ������������ �������� 1�� ������
		//bool * start_field_player2;
		//bool * field_player1;//������������ �������� ���������� �� ����� ����
		//bool * field_player2;
		// �������� ������ ����� ��� �������
	public:
		Game();
		static Ship * createFleet(); // ������� ����
		// TODO: createFleet �������� �� createPlayer � ���������� �� Ship*, � Player
		static Ship createShip(char ship_length); //������� �������
		void run();
		char * makeMove();
}