#include <iostream>
#include "string"
#include "vector"

using std::string; using std::vector; using std::cout; using std::cin;

#ifndef TIC_TAC_TOE_H
#define TIC_TAC_TOE_H


class tic_tac_toe
{
private:
    string player;
    vector<string> pegs {9, " "};
    void set_next_player();
    bool check_board_full();
    void clear_board();

public:
    bool game_over();
    void start_game(string first_player);
    void mark_board(int position);
    void display_board()const;
    string get_player()const{return player;};
};

#endif
//h