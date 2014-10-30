#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    long long size, k; 
    int p;
    cin >> size >> k;
    vector<int> prices;
    for(int i = 0; i < size; i++)
    {
        cin >> p;
        prices.push_back(p);
    }
    sort (prices.begin(), prices.end());
    
    int answer = 0;
    unsigned int i;
    long long total = 0;
    for(i=0; i < size && total < k; i++)
        total += prices[i];
    
    cout << --i << endl;
    
    return 0;
}
