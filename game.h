//
// Created by hugovalle1 on 12/12/2018.
//

#ifndef BOWLINGKATA_GAME_H
#define BOWLINGKATA_GAME_H
#include <array>

class Game {
    //int score = 0;
    int currentRoll = 0;
    std::array<int, 21> rolls;   // one per roll

public:
    void roll(int frame);
    int scoreGame();
    bool isSpare(int frameIndex);
};


#endif //BOWLINGKATA_GAME_H
