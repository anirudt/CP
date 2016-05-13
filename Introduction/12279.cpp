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
  int N, iter = 1;
  while(scanf("%d", &N) != EOF && N != 0) {
    int s = 0;
    for (int i=0; i<N; i++) {
      int p; cin >> p;
      if (p >= 1 && p <= 99)
        s++;
      else
        s--;
    }
    printf("Case %d: %d\n", iter, s);
    iter++;
  }
  return 0;
}
