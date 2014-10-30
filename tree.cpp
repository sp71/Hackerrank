// Original Question: https://www.hackerrank.com/challenges/utopian-tree

#include <iostream>
using namespace std;

int height(int n) {
    int result = 1; // 3 --> 6
    bool flag = false;
    for(int i=0; i < n; i++)
    {
        if (flag) result++;
        else result = result << 1; // much quicker using <<
        flag = !flag;
    }
    
    return result;
}
int main() {
    int T,n;
    cin >> T;
    while (T--) {
        cin >> n;
        cout << height(n) << endl;
    }
}
