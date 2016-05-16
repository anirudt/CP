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
  int N, K, P; int iter = 1;
  while(scanf("%d %d %d", &N, &K, &P) != EOF) {
    if ((K+P)%N == 0) printf("Case %d: %d\n", iter, N);
    else {
      int ans = (K+P)%N;
      printf("Case %d: %d\n", iter, ans);
    }
    iter++;
  }
  return 0;
}
