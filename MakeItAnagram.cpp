// Question:https://www.hackerrank.com/challenges/make-it-anagram
#include <cmath>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    int numHits[26];
    for(int i=0; i < 26; i++) {
        numHits[i] = 0;
    }
    for(int i =0; i < s1.length(); i++) {
        int index = (int)(s1[i]-'a');
        numHits[index]++;
    }
    for(int i=0; i < s2.length(); i++) {
        int index = (int)(s2[i]-'a');
        numHits[index]--;
    }
    int sum = 0;
    for(int i=0; i < 26; i++) {
        sum += abs(numHits[i]);
    }
    cout << sum;
    return 0;
}
