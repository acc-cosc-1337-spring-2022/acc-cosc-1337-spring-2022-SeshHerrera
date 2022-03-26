#include "tic_tac_toe.h"


bool tic_tac_toe::game_over()
{
    return check_board_full();
}


void tic_tac_toe::start_game(string first_player)
{
    player = first_player;
    clear_board();
}


void tic_tac_toe::mark_board(int position)
{
    pegs[position-1] = player;
    set_next_player();
}


void tic_tac_toe::display_board()const
{
    for(int i=0; i < 9; i+=3)
    {
        cout << pegs[i] << "|" << pegs[i+1] << "|" << pegs[i+2] << "\n";
    }
}


void tic_tac_toe::set_next_player()
{
    if(player == "X")
    {
        player = "O";
    }
    else
    {
        player = "X";
    }
}


bool tic_tac_toe::check_board_full()
{
    for(auto peg: pegs)
    {
        if(peg == " ")
        {
            return false;
        }
    }

    return true;
}


void tic_tac_toe::clear_board()
{
    for(auto& peg: pegs)
    {
        peg = " ";
    }
}

//cpp