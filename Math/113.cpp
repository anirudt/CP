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
  double p; int n;
  while(scanf("%d", &n) != EOF) {
    scanf("%lf", &p);
    double k = log10(p);
    k /= n;
    k = pow(10, k);
    int ans = (int)round(k);
    printf("%d\n", ans);
  }
  return 0;
}
