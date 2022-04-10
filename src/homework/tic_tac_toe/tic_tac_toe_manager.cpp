#include "tic_tac_toe_manager.h"



void TicTacToeManager::update_winner_account(string winner){
    
    if (winner == "X")
    {
        x_wins++;
    }
    else if (winner == "O")
    {
        o_wins++;
    }
    else {
        ties++;
    }
}

void TicTacToeManager::save_game(tic_tac_toe b){
    
    games.push_back (b);

}

void TicTacToeManager::get_winner_totals(int& x, int& o, int& t)
{
    x = x_wins;
    o = o_wins;
    t = ties;
}

std::ostream& operator<<(std::ostream& out, const TicTacToeManager& manager)
{
    for (auto game: manager.games)
    {
        out << game << "\n";
    }
    
    out << "O wins: " << manager.o_wins << "\n";
    out << "X wins: " << manager.x_wins << "\n";
    out << "TIES: " << manager.ties << "\n";

    return out;

}