#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <unordered_set>

using namespace std;


#define DICT_FILENAME "../src/english-words.txt"
// #define DICT_FILENAME "../scowl-2020.12.07/final/english-words.10"


int main(int argc, char *argv[]) {
    // 1) Read in Input Arguments (7 letters + program name)
    // vector<char> letters;
    unordered_set<char> letters;
    char specialLetter;     
    if (argc == 8) {
        for (int i=1; i < 8; i++) {
            letters.insert(argv[i][0]);
            if (i == 1) {
                specialLetter = argv[i][0];
            }
        }
    } else {
        cout << "Invalid input. Expected 7 letters." << endl;
        return 1;
    }

    // 2) Open the dictionary file and read in words
    vector<string> words;
    ifstream dictFile;
    char nextWord[60];
    dictFile.open(DICT_FILENAME);
    // cout << "About to read in the dict file" << endl;
    while (dictFile.good()) {
        dictFile.getline(nextWord,60);
        words.push_back(nextWord);
        // cout << "Read in " << nextWord << endl;
    }

    // 3) Evaluate the words to see if they fit
    bool foundSpecial, invalid;
    vector<string> validWords;
    // cout << "About to evaluate the words" << endl;
    for (int i=0; i<words.size(); i++) {
        foundSpecial = false;
        invalid = false;

        // Check the first letter
        auto got = letters.find(words[i][0]);
        if (got == letters.end() ) {
            continue;
        }

        for (int j=0; j < words[i].size(); j++) {
            auto got = letters.find(words[i][j]);
            if (got == letters.end() ) {
                invalid = true;
                // cout << "Invalid Word: " << words[i] << " with letter: " << words[i][j] <<  endl;
                break;
            } else {
                if (specialLetter == words[i][j]) {
                    foundSpecial = true;
                }
            }
        }

        if (!invalid && foundSpecial && (words[i].size() >= 4) ) {
            validWords.push_back(words[i]);
            // cout << "Added " << words[i] << endl;
        }
    }

    // 4) Report Words
    cout << "Valid Words are: " << endl;
    for (int i=0; i < validWords.size(); i++) {
        cout << validWords[i] << endl;
    }

    return 0;
}