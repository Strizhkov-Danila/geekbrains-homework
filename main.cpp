#include <iostream>

using namespace std;

extern int exi;
static int si;

void change ();

int main () {
	char ch1 = 75, ch2 = 'K';
	short sh;
	int i1 = 0, i2;
	unsigned int ui = 1324;
	float f;

	exi = 35;
	si = -32;
	sh = -12354;
	i2 = -1297;
	f = 24.694;

	void change();
	
	// Exerise 2
	enum null_cross {Null = 79, Cross = 88};

	// Exercise 3
	char nac[3][3] = {{Null, Cross, Cross}, {Null, Null, Cross}, {Cross, Null, Cross}};
	cout << nac[0][0] << " " << nac[0][1] << " " << nac[0][2] << endl;
	cout << nac[1][0] << " " << nac[1][1] << " " << nac[1][2] << endl;
	cout << nac[2][0] << " " << nac[2][1] << " " << nac[2][2] << endl;
	
	// Exercise 4
	struct battleground_for_nac {
		char player_1_name[20]; 	// Имя первого игрока
		char player_2_name[20]; 	// Имя второго игрока
		char player_1_sign;		// Какой знак выберет первый игрок (крест или ноль). У второго игрока выбора нет
		char player_2_sign;
		int player_1_turn_string;	// Ход первого игрока. В какой строке будет сделан ход
		int player_1_turn_column;	// В каком столбце
		int player_2_turn_string;	// Ход второго игрока. В какой строке будет сделан ход
		int player_2_turn_column;	// В каком столбце
		int turn; 			// Номер хода
		char ground_nac[3][3];		// Поле для игры 3х3
	};
	
	typedef struct battleground_for_nac Ground;
	
	Ground one;

	one.player_1_name[0] = 'I';
	// ...
	one.player_2_name[0] = 'U';
	// ...
	one.player_1_sign = Cross;

	if (one.player_1_sign == Cross)
		one.player_2_sign = Null;
	else
		one.player_2_sign = Cross;
	
	one.player_1_turn_string = 1;
	one.player_1_turn_column = 2;
	one.ground_nac[one.player_1_turn_string][one.player_1_turn_column] = one.player_1_sign;
	one.player_2_turn_string = 0;
	one.player_2_turn_column = 0;
	one.ground_nac[one.player_2_turn_string][one.player_2_turn_column] = one.player_2_sign;
	one.turn = 1;

	Ground two;
	two.player_1_turn_string = 0;
	two.player_1_turn_string = 2;
	one.ground_nac[two.player_1_turn_string][two.player_1_turn_column] = one.player_1_sign;
	// ...
	// ...
	// ...






	return 0;
}

