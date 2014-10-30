// Original Question: https://www.hackerrank.com/challenges/insertionsort1

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
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;

void print ( vector<int> a){
    for( int i=0; i < a.size(); i++) cout << a[i] << " ";
    cout << endl;
}
void insertionSort(vector <int>  ar) {
    int last = ar[ar.size()-1];
    bool goAgain = true;
    for(int i=ar.size()-2; i >= 0 && goAgain; i--)
    {
        if(last < ar[i]){
            ar[i+1] = ar[i]; // shifting right
        }
        else{
            ar[i+1] = last;
            goAgain = false;
        }
        print(ar);
    }
    if (goAgain) // in case first element
    {
        ar[0] = last;
        print(ar);
    }
}
int main(void) {
   vector <int>  _ar;
   int _ar_size;
cin >> _ar_size;
for(int _ar_i=0; _ar_i<_ar_size; _ar_i++) {
   int _ar_tmp;
   cin >> _ar_tmp;
   _ar.push_back(_ar_tmp); 
}

insertionSort(_ar);
   
   return 0;
}

