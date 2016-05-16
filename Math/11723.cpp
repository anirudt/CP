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
  int N, R;
  int iter = 1;
  while(scanf("%d %d", &R, &N) != EOF && (N > 0 && R > 0)) {
    if (R<N) printf("Case %d: 0\n", iter);
    else {
      R = R - N;
      int ans;
      if (R%N) ans = 1 + R/N;
      else ans = R/N;
      if (ans > 26) printf("Case %d: impossible\n", iter);
      else printf("Case %d: %d\n", iter, ans);
    }
    iter++;
  }
  return 0;
}
