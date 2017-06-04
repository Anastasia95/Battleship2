
class Ship {
	private:
		char stern[2]; //корма
		char bow[2]; //нос корабля
		bool is_killed, is_hitted; //убит или ранен
	public:
		void setStern(char stern_x, char stern_y);
		void setBow(char bow_x, char bow_y);
		void setKilled(is_killed);
		void setHitted(is_hitted);
		char getStern(char stern_x, char stern_y);
		char getBow(char bow_x, char bow_y);
		bool isKilled();
		bool isHitted();
		char length();
		Ship(char stern_x, char stern_y, char bow_x, char bow_y);
}