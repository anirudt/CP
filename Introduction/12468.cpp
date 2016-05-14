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
  int a, b;
  while(scanf("%d %d", &a, &b) != EOF && (a >= 0 && b >= 0)) {
    if (a > b) swap(a, b);
    int ans = b - a >  99 - (b - a) + 1? 99 - (b - a) + 1: b - a;
    printf("%d\n", ans);
  }
  return 0;
}
