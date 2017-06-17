 
class Ship {
	private:
		//char stern[2]; //корма
		char bow[2]; //нос корабля
		bool is_killed, is_hitted; //убит или ранен
		char direction; // ориентация: 2 - горизонтальная, 1 - вертикальная
		char length; // = 1, 2, 3, 4
	public:
		Ship(char bow_x, char bow_y, char direction, char length);
		//void setStern(char stern_x, char stern_y);
		void setBow(char bow_x, char bow_y);
		void setKilled(bool is_killed);
		void setHitted(bool is_hitted);
		void setDirection(char direction);
		void setLength(char length);
		//char getStern(char stern_x, char stern_y); // непонятно что делает
		//char getBow(char bow_x, char bow_y);
		//char * getStern();
		char * getBow();
		bool isKilled();
		bool isHitted();
		char getDirection();
		char getLength();
		//char length();
}