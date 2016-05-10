#include <cstdio>
#include <sstream>
#include <cmath>
#include <climits>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <stack>

using namespace std;

typedef long long ll;

typedef vector<int> vi;
typedef vector<float> vf;
typedef vector<string> vs;
typedef vector<vi> vi2d;
typedef vector<ll> vll;

typedef map<int, int> mii;

// Glob Var Defs

int main() {
  vi coins = {1,5,10,25,50};
  int n;
  vi guess = {0,0,0,0,0};
  while(scanf("%d", &n) != EOF) {
    int idx;
    while(coins[idx] < n && coins[idx+1] < n && idx < 4)
      idx++;
    /* Initial Guess */
    guess.push_back(n/coins[idx]);
    int rem = n%guess[idx];
    int i = idx;
    while(i>=1) {
      guess.push_back(rem/coins[i]);
      rem = rem%coins[i];
      i--;
    }
    int ans = 1;
    for (int i=0; i<guess.size(); i++) {
      
    }
  }

  return 0;
}
