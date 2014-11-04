// Original Question: https://www.hackerrank.com/challenges/lonely-integer

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int lonelyinteger(vector < int > a) {
    int result = 0;
    bool goAgain = true;
    const int SIZE = 101;
    int count[SIZE];
    for(int i=0; i < SIZE; i++)
        count[i] = 0;
    for(int elem: a){
        count[elem]++;
    }
    for(int i=0; i < SIZE && goAgain; i++){
        if( count[i] == 1){
            result = i;
            goAgain = false;   
        }
    }
    return result;
}
int main() {
    int res;
    
    int _a_size;
    cin >> _a_size;
    cin.ignore (numeric_limits<std::streamsize>::max(), '\n'); 
    vector<int> _a;
    int _a_item;
    for(int _a_i=0; _a_i<_a_size; _a_i++) {
        cin >> _a_item;
        _a.push_back(_a_item);
    }
    
    res = lonelyinteger(_a);
    cout << res;
    
    return 0;
}

