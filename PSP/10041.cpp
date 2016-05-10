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
  ll T; scanf("%lld", &T);
  while(T--) {
    int r; vi s;
    cin >> r;
    for (int i=0; i<r; i++) {
      int p; cin >> p;
      s.push_back(p);
    }
    int sum = INT_MAX;
    for (int i=0; i<r; i++) {
      int tmp = 0;
      for (int j = 0; j<r ;j++) {
        tmp += s[i] - s[j] > 0 ? s[i]-s[j] : s[j] - s[i];
      }
      if (sum > tmp) sum = tmp;
    }
    cout << sum << endl;
  }
  return 0;
}
