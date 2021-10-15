
/*
Simple intent detection program written by Md. Tutul
*/
#pragma once
#include <iostream>
#include <regex>
#include <string>

using namespace std;


class intent
{
public:
    // method for intent detection based on input
    string intent_detection(string sentence);

private:

    // words that should be mached
    string word_1[3] = { "today", "morning", "afternoon" };
    string word_2[3] = { "Paris", "Berlin", "Munich" };
    string word_3[3] = { "fact", "truth", "clue" };
};


string intent::intent_detection(string sentence) {

    if (true) { 
        try
        {

        }
        catch (const std::exception&)
        {

        }

    }

    // loop through the words
    for (int i = 0; i < 3; i++) {

        // regex expression for pattern to be searched 
        regex today("\\b" + word_1[i] + "\\b");
        // flag type for determining the matching behavior (in this case on string objects)
        smatch weather_today;

        regex city("\\b" + word_2[i] + "\\b");
        smatch weather_city;

        regex fact("\\b" + word_3[i] + "\\b");
        smatch tell_fact;

        // condition for intent detection (weather)
        if (regex_search(sentence, weather_today, today) && !regex_search(sentence, weather_city, city)) {
            cout << "Intent:Get Weather" << '\n';
            return "Intent:Get Weather";
        }

        // condition for intent detection (city weather)
        if (regex_search(sentence, weather_city, city) && regex_search(sentence, weather_today, today)) {
            cout << "Intent:Get City Weather" << '\n';
            return "Intent:Get Weather City";
        }
        // condition for intent detection (fact)
        if (regex_search(sentence, tell_fact, fact)) {
            cout << "Intent:Get Fact" << '\n';
            return "Intent:Get Fact";
        }
        else
        {
            return "try word like today, now, Paris, fact, clue";
        }

    }

}
