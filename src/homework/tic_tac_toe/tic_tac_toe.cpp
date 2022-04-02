

/*

    REMEMBER TO USE Ctrl + Shift + P for cmake to start up


*/


#include "tic_tac_toe.h"


bool tic_tac_toe::game_over()
{   

    if (check_row_win() == true)
    {
        set_winner();
        return true;
    }

    else if (check_column_win() == true)
    {
        set_winner();
        return true;
    }
    
    else if (check_diagonal_win() == true)
    {
        set_winner();
        return true;
        
    }

    else {
        winner = "C";
        bool tie = check_board_full();
        return tie;
    }

    
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

//checking who won

bool tic_tac_toe::check_column_win(){
    if ((pegs[0] == "X" && pegs[3] == "X" && pegs[6] == "X") || (pegs[1] == "X" && pegs[4] == "X" && pegs[7] == "X") || (pegs[2] == "X" && pegs[5] == "X" && pegs[8] == "X"))
    {
        return true;
    }

    else if ((pegs[0] == "O" && pegs[3] == "O" && pegs[6] == "O") || (pegs[1] == "O" && pegs[4] == "O" && pegs[7] == "O") || (pegs[2] == "O" && pegs[5] == "O" && pegs[8] == "O"))
    {
        return true;
    }

    else {
        return false;
    }
}

bool tic_tac_toe::check_row_win(){
    if ((pegs[0] == "X" && pegs[1] == "X" && pegs[2] == "X") || (pegs[3] == "X" && pegs[4] == "X" && pegs[5] == "X") || (pegs[6] == "X" && pegs[7] == "X" && pegs[8] == "X"))
    {
        return true;
    }

    else if ((pegs[0] == "O" && pegs[1] == "O" && pegs[2] == "O") || (pegs[3] == "O" && pegs[4] == "O" && pegs[5] == "O") || (pegs[6] == "O" && pegs[7] == "O" && pegs[8] == "O"))
    {
        return true;
    }

    else {
        return false;
    }
}

bool tic_tac_toe::check_diagonal_win(){
    if ((pegs[0] == "X" && pegs[4] == "X" && pegs[8] == "X") || (pegs[6] == "X" && pegs[4] == "X" && pegs[2] == "X"))
    {
        return true;
    }

    else if ((pegs[0] == "O" && pegs[4] == "O" && pegs[8] == "O") || (pegs[6] == "O" && pegs[4] == "O" && pegs[2] == "O"))
    {
        return true;
    }

    else {
        return false;
    }
}



void tic_tac_toe::set_winner(){
    
    if (player == "X")
    {
        winner = "O";
    }

    else {
        winner = "X";
    }
}



//cpp 