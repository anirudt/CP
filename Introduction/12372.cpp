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
  int T, iter = 1; scanf("%d", &T);
  while(T--) {
    int l, w, h;
    scanf("%d %d %d", &l, &w, &h);
    if (l>20 || w>20 || h>20) printf("Case %d: bad\n", iter);
    else printf("Case %d: good\n", iter);
    iter++;
  }
  return 0;
}
