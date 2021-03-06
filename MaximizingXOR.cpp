// Original Question: https://www.hackerrank.com/challenges/maximizing-xor

#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
/*
 * Complete the function below.
 */
int maxXor(int l, int r) 
{
    int big = 0;
    int val;
    for(int i=l; i <= r; i++)
    {
        for(int j=i; j <= r; j++)
        {
            val = i^j;
            if( val > big) big = val;
 //           cout << i << "^" << j << " " << val << endl;
        }
    }
    return big;
}

int main() {
    int res;
    int _l, _r;
    cin >> _l;
    cin >> _r;
    res = maxXor(_l, _r);
    cout << res;
    return 0;
}

