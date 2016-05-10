#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <stack>
#include <climits>

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
  ll n;
  while(scanf("%lld", &n) != EOF) {
    int idx = 0;
    int l = 0, s = 1;
    while (1) {
      l = s%n;
      if (l==0) {
        break;
      }
      s = 10*l+1;
      idx++;
    }
    cout << idx+1 << endl;
  }
  return 0;
}
