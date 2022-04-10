#include "tic_tac_toe.h"
#include "tic_tac_toe_manager.h"

using std::cout; using std::cin;

int main() 
{
	TicTacToeManager manager;
	tic_tac_toe game;
	string first_player;
	char user_choice;

	do
	{
		int addO = 0, addX = 0;

		cout << "To stop playing enter anything except X/O \n";
		cout << "First Player selects (X or O) ";
		cin >> first_player;
		cout << "\n";

		while ( first_player == "O" || first_player == "X")
		{
			
			game.start_game(first_player);
			int position;
			

			while (game.game_over() == false){
				cout << "enter to place position 1-9:  ";
				cin >> position;
				game.mark_board(position);
				/*game.display_board();*/
			}


			// checks who won the round.
			if (game.get_winner() == "O")
			{
				addO++;
				cout << "the winner for this round is: " << game.get_winner() << "\n\n\n";
			}
			else if (game.get_winner() == "X")
			{
				addX++;
				cout << "the winner for this round is: " << game.get_winner() << "\n\n\n";
			}
			else if (game.get_winner() == "C")
			{
				cout << "no one won " << game.get_winner() << "\n\n\n";
			}

			
			
			cout << "To stop playing enter anything except X/O \n";
			cout << "First Player selects (X or O) ";
			cin >> first_player;
			cout << "\n";

		}
		while ( first_player == "O" || first_player == "X");
		

		 // checks who won the match.
		if (addX < addO)
		{
			cout << "the winner of the match is: O\n\n"; 
		}
		else if (addX > addO)
		{
			cout << "the winner of the match is: X\n\n";
		}
		else if (addX == addO)
		{
			cout << "the match is a tie \n\n";
		}
		
		
		cout << "Play again? (y or n) ";
		cin >> user_choice;
	
	}while(user_choice == 'Y' || user_choice == 'y');

	return 0;
}