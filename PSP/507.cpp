#include <cstdio>
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
  int b, iter = 1; cin >> b;
  while(b--) {
    int s; cin >> s;
    vi route;
    route.push_back(0);
    for (int i=0; i<s-1; i++) {
      int p; cin >> p;
      route.push_back(p);
    }

    int sum = 0, max_ = 0, l = 0, l_m = 0, r_m = 0;
    for (int i=1; i<s; i++) {
      sum += route[i];
      if (sum > max_ || (sum == max_ && (r_m - l_m < i - l))) {
        l_m = l;
        r_m = i;
        max_ = sum;
      }
      if (sum < 0) {
        sum = 0;
        l = i;
      }
    }
    if (max_ > 0) cout << "The nicest part of route " << iter << " is between stops " << l_m+1 << " and " << r_m+1 << endl;
    else cout << "Route " << iter << " has no nice parts" << endl;
    iter++;
  }
  return 0;
}
