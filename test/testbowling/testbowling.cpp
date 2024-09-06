#include <gtest/gtest.h>

#include "bowling.h"

class BowlingTest : public ::testing::Test {
protected:
    Game m_game;
};


TEST_F(BowlingTest, noPins) {
    m_game.roll(0);
    EXPECT_EQ(m_game.score(), 0);
}

TEST_F(BowlingTest, pinLimit) {
    EXPECT_TRUE(m_game.roll(4));
    EXPECT_EQ(m_game.score(), 4);
    
    EXPECT_FALSE(m_game.roll(7));
}

TEST_F(BowlingTest, validPins) {
    EXPECT_EQ(m_game.score(), 0);
    
    m_game.roll(3);
    EXPECT_EQ(m_game.score(), 3);

    m_game.roll(4);
    EXPECT_EQ(m_game.score(), 7);
}

TEST_F(BowlingTest, checkIfRollIsStrike)
{
    m_game.roll(10);
    EXPECT_EQ(m_game.score(), 20);
}

