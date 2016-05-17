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
  int T, iter = 1; scanf("%d", &T);
  while(T--) {
    int C, d;
    scanf("%d %d", &C, &d);
    float F = 1.8*C + 32;
    F += d;
    F = 5.0/9.0 * (F - 32);
    printf("Case %d: %.2f\n", iter, F);
    iter++;
  }
  return 0;
}
