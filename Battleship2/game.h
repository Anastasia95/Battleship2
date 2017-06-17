#pragma once
#include "game.h"
#include "player.h"
#include "ship.h"

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
		static Ship * createFleet(bool * field); // ������� ����
		static Ship createShip(char ship_length, bool * field); //������� �������
		//static Ship createShip(char ship_length); //������� �������
		void run();
		//bool * makeMove(); //������� ��� (��������� � � � �����. �������� ����� - ���� / �����)
		char * makeMove();
}