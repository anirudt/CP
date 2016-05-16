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
  int t; scanf("%d", &t);
  int iter = 1;
  while(t--) {
    int d, v, u;
    scanf("%d %d %d", &d, &v, &u);
    if (u <= v || v == 0 || u == 0) printf("Case %d: can't determine\n", iter);
    else {
      float a = fabs(- (d*1.0/u) + (d*1.0/sqrt((u*u-v*v))));
      printf("Case %d: %.3f\n", iter, a);
    }
    iter++;
  }
  return 0;
}
