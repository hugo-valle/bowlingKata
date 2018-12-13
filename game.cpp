//
// Created by hugovalle1 on 12/12/2018.
//

#include "game.h"

/**
 * Roll Pins
 * @param frame - Number of pins
 */
void Game::roll(int frame)
{
    rolls[currentRoll] = frame;
    currentRoll++;
    //score += frame;
}

/**
 * Returns final game score
 */
int Game::scoreGame()
{
    int score = 0;
    int rollNum = 0;
    // 10 scores per game
    for(int frame = 0; frame < 10; frame++)
    {
        if(isSpare(rollNum)) // spare
        {
            score += 10 + rolls[rollNum + 2];
        }
        else {
            score += rolls[rollNum] + rolls[rollNum + 1];
        }
        // Scoring per game
        rollNum += 2;
    }
    return score;
}

bool Game::isSpare(int frameIndex)
{
    return rolls[frameIndex] + rolls[frameIndex + 1] == 10; // spare
}
