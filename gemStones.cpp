// Original Question: https://www.hackerrank.com/challenges/gem-stones

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// buckets for each string
// could have used vectors but making 2D array is sweet =D
int numGems(const vector<string> &gems)
{
    int gemCount = 0;
    bool possibleGem = true;
    const int ALHPHABET_SIZE = 26;
    bool **letterHit = new bool*[gems.size()];
    for(int i=0; i < gems.size(); i++)
    {
        letterHit[i] = new bool[ALHPHABET_SIZE];
    }
    for(int i=0; i < gems.size(); i++) // initalize 2d array to false
    {
        for(int j=0; j < ALHPHABET_SIZE; j++)
        {
            letterHit[i][j] = false;
        }
    }
    
    
    for(int i=0; i < gems.size(); i++) // for n strings
    {
        for(int j=0; j < gems[i].length(); j++) // for each individual string
        {
            letterHit[i][gems[i][j] - 'a'] = true; // mark character as seen
        }
    }
    
    for(int i=0; i < ALHPHABET_SIZE; i++)
    {
        for(int j=0; j < gems.size() && possibleGem; j++)
        {
            if(!letterHit[j][i]) possibleGem = false;
        }
        if(possibleGem) gemCount++;
        possibleGem = true;
    }
    return gemCount;
}

int main() {
    int n;
    string s;
    cin >> n;
    vector<string> gems(n);
    for(int i=0; i < n; i++)
        cin >> gems[i];
    cout << numGems(gems);
    gems.clear();
    return 0;
}
