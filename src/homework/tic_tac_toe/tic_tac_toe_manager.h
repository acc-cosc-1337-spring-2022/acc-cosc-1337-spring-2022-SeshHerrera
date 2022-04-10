#include "tic_tac_toe.h"
#include <iostream>

#ifndef TIC_TAC_TOE_MANAGER
#define TIC_TAC_TOE_MANAGER

class TicTacToeManager
{
private:
    vector <tic_tac_toe>games;
    int o_wins = {0};
    int ties = {0};
    int x_wins = {0};
    void update_winner_account(std::string);

public:
    void get_winner_totals(int&, int&, int&);
    void save_game(tic_tac_toe);
    friend std::ostream& operator<<(std::ostream&, TicTacToeManager&);
};

#endif

//h