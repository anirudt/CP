#include <cstdio>
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
  int n, k;
  while(scanf("%d %d", &n, &k) != EOF) {
    int sum = n;
    int b, r, tb = 0;
    while (sum>=k) {
      b = sum/k;
      r = sum%k;
      sum = b+r;
      tb = tb + b;
    }
    cout << n+tb << endl;
  }
  return 0;
}
