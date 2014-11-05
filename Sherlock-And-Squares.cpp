// Original Question: https://www.hackerrank.com/challenges/sherlock-and-squares

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int readNTimes;  
    int a, b;
    cin >> readNTimes;
    while(readNTimes--){
        cin >> a >> b;
        cout << floor(sqrt(b)) - floor(sqrt(a - 1)) << endl;
    }
    
    return 0;
}

