// Copyright (c) 2022 Van Nguyen All rights reserved.
//
// Created by: Van Nguyen
// Created on: December 31, 2022
// This program asks the user for a string and
// then displays each word of the string on a new line


#include <iostream>
#include <list>


std::list<std::string> String_Parser(std::string stringSentence) {
    // Declared list of words
    std::list<std::string> listOfWords;

    // Initialize Variable
    std::string stringWord = "";

    // Iterates through each character in the user's string
    for (auto iterator : stringSentence) {
        // Checks for spaces in the input to determine each word
        if (iterator == ' ') {
            // Adds the word to list
            listOfWords.push_back(stringWord);

            // Resets placeholder variable
            stringWord = "";

            // IF there was not a space in the string yet
        } else {
            // Adds the character to placeholder variable
            stringWord = stringWord + iterator;
        }
    }
    // Adds last element to the list as there is not a space after it
    listOfWords.push_back(stringWord);

    // Returns the list of words to function call
    return listOfWords;
}


int main() {
    // Declared Variable
    std::string userSentence;

    // Declared List (for user's words)
    std::list<std::string> userWordsList;

    // Displays what the program does
    std::cout << "This program will take in a sentence as input"
              << " and display each word separately on a new line"
              << ", without spaces." << std::endl;

    // Asks user for their string
    std::cout << "Enter a string: ";
    std::getline(std::cin, userSentence);

    // Calls function to get the list of words in the string
    userWordsList = String_Parser(userSentence);

    // Displays each word in the list
    for (std::string word : userWordsList) {
        std::cout << word << std::endl;
    }
}
