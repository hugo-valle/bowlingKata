#define CATCH_CONFIG_MAIN

#include "catch.hpp"
#include "game.h"

TEST_CASE("Does the Game exists","[score]")
{
    // Arrange
    Game *g = new Game;
    // Act

    // Assert
    REQUIRE(g != NULL);
}