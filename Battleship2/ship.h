 
class Ship {
	private:
		//char stern[2]; //�����
		char bow[2]; //��� �������
		bool is_killed, is_hitted; //���� ��� �����
		char direction; // ����������: 2 - ��������������, 1 - ������������
		char length; // = 1, 2, 3, 4
	public:
		Ship(char bow_x, char bow_y, char direction, char length);
		//void setStern(char stern_x, char stern_y);
		void setBow(char bow_x, char bow_y);
		void setKilled(bool is_killed);
		void setHitted(bool is_hitted);
		void setDirection(char direction);
		void setLength(char length);
		//char getStern(char stern_x, char stern_y); // ��������� ��� ������
		//char getBow(char bow_x, char bow_y);
		//char * getStern();
		char * getBow();
		bool isKilled();
		bool isHitted();
		char getDirection();
		char getLength();
		//char length();
}