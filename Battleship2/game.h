#include "player.h"

class Game {
	private:
		Player players[2];
		// �������� ������ ����� ��� �������
	public:
		static Ship * createFleet(); // ������� ����
		static Ship createShip(char ship_length); //������� �������
		void run();
		bool * makeMove(); //������� ��� (��������� � � � �����. �������� ����� - ���� / �����)
		Game();
}