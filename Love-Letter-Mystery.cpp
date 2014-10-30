// Original Question: https://www.hackerrank.com/challenges/the-love-letter-mystery

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// Instead of counting each time a letter changes, simply take the  difference of the letters
// Much more time-saving and efficient! 
int palindromeChange(string s)
{
    int count = 0;
    for(int i=0; i < s.length()/2; i++) // Only need to traverse half the string
        count += abs(s[i] - s[s.length()-i-1]); // s[s.length()-i-1] refers to letters on right hand side of string
    return count;
}

int main() { 
    int t;
    string s;
    cin >> t;
    for(int i=0; i < t; i++)
    {
        cin >> s;
        cout << palindromeChange(s) << endl;
    }
    
    return 0;
}
