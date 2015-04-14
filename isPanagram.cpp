// https://www.hackerrank.com/challenges/pangrams

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isPanagram(string s){
    bool isHit[26];
    for(int i=0; i < 26; i++)
        isHit[i] = false;
    for(int i=0; i < s.length(); i++){
        if( isalpha (s[i])  ){ // is it a letter. could be space, etc
            isHit[(int)(tolower(s[i]) - 'a')] = true;
        }
    }
    for(int i=0; i < 26; i++){
        if(!isHit[i]) return false;
    }
    return true;
}

int main() {
    string s;
    getline(cin, s);
    if(!isPanagram(s)) cout << "not ";
    cout << "pangram";
    return 0;
}
