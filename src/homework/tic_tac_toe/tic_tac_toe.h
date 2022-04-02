#include <iostream>
#include "string"
#include "vector"

using std::string; using std::vector; using std::cout; using std::cin;

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H


class tic_tac_toe
{
private:
    string winner;
    string player;
    vector<string> pegs {9, " "};
    void set_next_player();
    bool check_board_full();
    void clear_board();

    bool check_column_win();
    bool check_row_win();
    bool check_diagonal_win();
    void set_winner();

public:
    bool game_over();
    void start_game(string first_player);
    void mark_board(int position);
    void display_board()const;
    string get_player()const{return player;};

    string get_winner()const{return winner;};
};

#endif
//h

