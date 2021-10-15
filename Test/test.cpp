#include "pch.h"
#include "../gtest/gtest.h"
#include "../Intent/intent.h"

intent myintent;

TEST(IntentTest, PositiveNos) {

  EXPECT_EQ("Intent:Get Weather", myintent.intent_detection("what is the weather today"));
  EXPECT_EQ("Intent:Get Weather City", myintent.intent_detection(" What is the weather like in Paris today?"));
  EXPECT_EQ("Intent:Get Fact", myintent.intent_detection("Tell me an interesting fact."));
  EXPECT_TRUE(true);
}

TEST(IntentTest, NegativeNos) {

    EXPECT_EQ("try word like today, now, Paris, fact, clue", myintent.intent_detection("123456987"));
}