#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "tic_tac_toe.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test tic tac toe game over for a tie")
{
	tic_tac_toe game;

	game.mark_board(1);
	REQUIRE(false == game.game_over());
	game.mark_board(2);
	REQUIRE(false == game.game_over());
	game.mark_board(3);
	REQUIRE(false == game.game_over());
	game.mark_board(4);
	REQUIRE(false == game.game_over());
	game.mark_board(5);
	REQUIRE(false == game.game_over());
	game.mark_board(7);
	REQUIRE(false == game.game_over());
	game.mark_board(6);
	REQUIRE(false == game.game_over());
	game.mark_board(9);
	REQUIRE(false == game.game_over());
	game.mark_board(8);
	REQUIRE(true == game.game_over());

	REQUIRE("C" == game.get_winner());
}

TEST_CASE("Test first player is set to O")
{
	tic_tac_toe game;

	game.start_game("O");
	REQUIRE("O" == game.get_player());

	game.start_game("X");
	REQUIRE("X" == game.get_player());
}

/**************** TESTING COLUMNS ****************/

TEST_CASE("Test first column works"){

	tic_tac_toe game;
	game.start_game("X");

	game.mark_board(1);
	REQUIRE(false == game.game_over());
	game.mark_board(2);
	REQUIRE(false == game.game_over());
	game.mark_board(4);
	REQUIRE(false == game.game_over());
	game.mark_board(5);
	REQUIRE(false == game.game_over());
	game.mark_board(7);
	REQUIRE(true == game.game_over());
}

TEST_CASE("Test second column works"){

	tic_tac_toe game;
	game.start_game("X");

	game.mark_board(2);
	REQUIRE(false == game.game_over());
	game.mark_board(1);
	REQUIRE(false == game.game_over());
	game.mark_board(5);
	REQUIRE(false == game.game_over());
	game.mark_board(6);
	REQUIRE(false == game.game_over());
	game.mark_board(8);
	REQUIRE(true == game.game_over());

}

TEST_CASE("Test third column works"){

	tic_tac_toe game;
	game.start_game("X");

	game.mark_board(3);
	REQUIRE(false == game.game_over());
	game.mark_board(1);
	REQUIRE(false == game.game_over());
	game.mark_board(6);
	REQUIRE(false == game.game_over());
	game.mark_board(2);
	REQUIRE(false == game.game_over());
	game.mark_board(9);
	REQUIRE(true == game.game_over());

}

/******************* TESTING ROWS *****************/

TEST_CASE("Test first row works"){

	tic_tac_toe game;
	game.start_game("X");

	game.mark_board(1);
	REQUIRE(false == game.game_over());
	game.mark_board(4);
	REQUIRE(false == game.game_over());
	game.mark_board(2);
	REQUIRE(false == game.game_over());
	game.mark_board(6);
	REQUIRE(false == game.game_over());
	game.mark_board(3);
	REQUIRE(true == game.game_over());

}

TEST_CASE("Test second row works"){

	tic_tac_toe game;
	game.start_game("X");

	game.mark_board(4);
	REQUIRE(false == game.game_over());
	game.mark_board(3);
	REQUIRE(false == game.game_over());
	game.mark_board(5);
	REQUIRE(false == game.game_over());
	game.mark_board(1);
	REQUIRE(false == game.game_over());
	game.mark_board(6);
	REQUIRE(true == game.game_over());

}

TEST_CASE("Test third row works"){

	tic_tac_toe game;
	game.start_game("X");

	game.mark_board(7);
	REQUIRE(false == game.game_over());
	game.mark_board(3);
	REQUIRE(false == game.game_over());
	game.mark_board(8);
	REQUIRE(false == game.game_over());
	game.mark_board(1);
	REQUIRE(false == game.game_over());
	game.mark_board(9);
	REQUIRE(true == game.game_over());

}

/******************** TESTING DIAGONALLY ****************/

TEST_CASE("Test top left diagonal works"){

	tic_tac_toe game;
	game.start_game("X");

	game.mark_board(1);
	REQUIRE(false == game.game_over());
	game.mark_board(3);
	REQUIRE(false == game.game_over());
	game.mark_board(5);
	REQUIRE(false == game.game_over());
	game.mark_board(2);
	REQUIRE(false == game.game_over());
	game.mark_board(9);
	REQUIRE(true == game.game_over());

}

TEST_CASE("Test bottom left diagonal works"){

	tic_tac_toe game;
	game.start_game("X");

	game.mark_board(7);
	REQUIRE(false == game.game_over());
	game.mark_board(2);
	REQUIRE(false == game.game_over());
	game.mark_board(5);
	REQUIRE(false == game.game_over());
	game.mark_board(1);
	REQUIRE(false == game.game_over());
	game.mark_board(3);
	REQUIRE(true == game.game_over());

}