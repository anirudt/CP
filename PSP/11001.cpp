#include <cstdio>
#include <set>
#include <functional>
#include <cctype>
#include <queue>
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
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int Vt, V0;
  while(cin >> Vt >> V0 && (Vt != 0 || V0 != 0)) {
    double opt_n = Vt/(2.0*V0);
    if (opt_n - ((long)opt_n) == 0.5) cout << 0 << endl;
    else {
      if (opt_n - ((long)opt_n) < 0.5) cout << (long)opt_n << endl;
      else cout << (long)opt_n+1 << endl;
    }
  }
  return 0;
}
