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
  int T, iter = 1; scanf("%d\n", &T);
  while(T--) {
    int N; scanf("%d\n", &N);
    int a = 0, b = 0;
    for (int i=0; i<N; i++) {
      int p; cin >> p;
      a += (p/30 + 1)*10;
      b += (p/60 + 1)*15;
    }
    printf("Case %d: ", iter);
    if (a < b) printf("Mile %d\n", a);
    else if (b < a) printf("Juice %d\n", b);
    else printf("Mile Juice %d\n", a);

    iter++;
  }
  return 0;
}
