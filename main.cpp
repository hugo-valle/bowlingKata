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

TEST_CASE("Single Pin Game Return 20","[score]")
{
    // Arrange
    Game g;
    int pins = 1;
    // Act
    for(int frame = 0; frame < 20; frame++)
    {
        g.roll(pins);
    }
    // Assert
    REQUIRE(20 == g.scoreGame());
}

TEST_CASE("One Spare Game Returns Correct Value","[score]")
{
    // Arrange
    Game g;
    int pins = 0;
    // Act
    g.roll(5);
    g.roll(5);  // spare
    g.roll(3);
    for(int frame = 0; frame < 17; frame++)
    {
        g.roll(pins);
    }
    // Assert
    REQUIRE(16 == g.scoreGame());
}

TEST_CASE("One Strike Game Returns Correct Value","[score]")
{
    // Arrange
    Game g;
    int pins = 0;
    // Act
    g.roll(10);  // strike
    g.roll(3);  // spare
    g.roll(4);
    for(int frame = 0; frame < 16; frame++)
    {
        g.roll(pins);
    }
    // Assert
    REQUIRE(24 == g.scoreGame());
}
TEST_CASE("All Strikes Returns Correct Value","[score]")
{
    // Arrange
    Game g;
    int pins = 10;
    // Act
    for(int frame = 0; frame < 12; frame++)
    {
        g.roll(pins);
    }
    // Assert
    REQUIRE(300 == g.scoreGame());
}
