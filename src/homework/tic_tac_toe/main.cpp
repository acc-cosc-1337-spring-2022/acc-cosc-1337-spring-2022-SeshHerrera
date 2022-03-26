#include "tic_tac_toe.h"

using std::cout; using std::cin;

int main() 
{
	tic_tac_toe game;
	string first_player;
	char user_choice;

	do
	{
		cout << "First Player selects (x or o) ";
		cin >> first_player;

		game.start_game(first_player);
		int position;

		while (game.game_over() == false){
			cout << "enter to place position 1-9:  ";
			cin >> position;
			game.mark_board(position);
			game.display_board();

		}

		cout << "Play again? (y or n)";
		cin >> user_choice;
	
	}while(user_choice == 'Y' || user_choice == 'y');

	return 0;
}