// Original Question: https://www.hackerrank.com/challenges/find-digits

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int dividesNumTimes(int input)
{
    int original = input;
    int count = 0;
    for(int digit; input > 0; input/=10)
    {
        digit = input % 10;
        if( digit > 0 && original % digit == 0 ) count++;
    }
    return count;
}
int main() {
    int n;
    cin >> n;
    int input;
    for(int i=0; i< n; i++)
    {
        cin >> input;
        cout << dividesNumTimes(input) << endl;
    }
    return 0;
}

