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

TEST_CASE("Gutter Game Return 0","[score]")
{
    // Arrange
    Game g;
    int pins = 0;
    // Act
    for(int frame = 0; frame < 20; frame++)
    {
        g.roll(pins);
    }
    // Assert
    REQUIRE(0 == g.scoreGame());
}
