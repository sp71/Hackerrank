// https://www.hackerrank.com/challenges/alternating-characters
#include <iostream>
#include <string>
using namespace std;

int getDeletions(string s)
{
    int count = 0;
    char c = s[0];
    for(int i=1; i < s.length(); i++)
    {
        if( c == s[i] ) count++;
        else c = s[i];
    }
    return count;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int num;
    string s;
    cin >> num;
    for(int i=0; i < num; i++)
    {
        cin >> s;
        cout << getDeletions(s) << endl;
    }
    return 0;
}

