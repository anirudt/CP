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

int digits(int n) {
  int k=0;
  while(n>0) {
    k+=n%10;
    n /= 10;
  }
  return k;
}

int main() {
  int n;
  while(cin >> n, n) {
    int k = n;
    while (k/10 != 0) {
      k = digits(k);
    }
    cout << k << endl;
  }
  return 0;
}
