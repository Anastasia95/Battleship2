#include "Ship.h"

class Player {
	private:
		Ship ships[10]; // ���������� � ������ 10 ��������
	public:
		char CountShips();
		Player(Ship ships[]);
}