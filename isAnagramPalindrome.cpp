// Original Question: https://www.hackerrank.com/challenges/game-of-thrones

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool isAnagramPalindrome(string s){
    const int SIZE = 26;
    int oddLetters = 0;
    // letters[0] for 'a', letters[1] for 'b', ..., letters[25] for 'z'.
    int letters[SIZE] = {0}; // set all elements to 0
    for(int i=0; i < s.length(); i++){ // traverse string
        ++letters[ s[i] - 'a' ]; // say s[i]='a', then 'a' - 'a' = 0. and letters[0] increments 'a' occurences.
    }
    // palindrome should only have at most 1 odd letter occurences
    for(int i=0; i < SIZE; i++){
        if(letters[i] % 2) oddLetters++;
        if (oddLetters > 1) return false;
    }
    return true;
}

int main() {
    string s;
    cin>>s;
    // Note: ternary has lower precdence than << operator
    cout << (isAnagramPalindrome(s) ? "YES" : "NO");
    return 0;
}

