/* 
 * File:   main.cpp
 * Author: Toshiki Arita
 * Prompt from http://www.reddit.com/r/dailyprogrammer/comments/1ystvb/022414_challenge_149_easy_disemvoweler/
 * Created on March 19, 2014, 9:28 PM
 * 
 * The purpose of this program is to remove vowels(a,e,i,o,u) and whitespaces from a sentence.
 * All characters are lowercase with no punctuation.
 * Removed characters will also be stored.
 * 
 */

#include <cstdlib>
#include <string.h>
#include <iostream>


using namespace std;

/*
 *      vow "input string here" eg. vow "hello world"
 */
int main(int argc, char** argv) {
    if (argc != 2) {
        cout << "Usage: vow <\"insert sentence here\"> eg. vow \"hello world.\"" << endl;
        return 1;
    }

    string line = argv[1];
    string kept, discard;
    char *fchar;
    for (int i = 0; i < line.length(); i++) {
        fchar = strchr("aeiou ", line[i]);
        if (fchar != NULL && line[i] != ' ') { // char is a vowel
            discard = discard + line[i];
        } else if (line[i] != ' ') {
            kept = kept + line[i];
        }
    }
    cout << kept << endl << discard << endl;

    return 0;
}

