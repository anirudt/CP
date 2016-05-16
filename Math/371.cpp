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
typedef map<long, int> mli;
mli dict;
// Glob Var Defs
int ackermann(long n) {
  if (dict[n] != 0) return dict[n];
  else {}
  long y = n % 2 == 1 ? 3 * n + 1 : n >> 1;
  if (y==1) return 1;
  else return dict[n] = 1 + ackermann(y);
}

int main() {
  int a, b;
  while(scanf("%d %d", &a, &b) != EOF && (a > 0 && b > 0)) {
    int tmp, max_ = 0, idx = a;
    if (a > b) swap(a, b);
    for (int i=a; i<=b; i++) {
      tmp = ackermann(i);
      if (tmp > max_) {
        max_ = tmp;
        idx = i;
      }
    }
    printf("Between %d and %d, %d generates the longest sequence of %d values.\n", a, b, idx, max_);
  }
  return 0;
}
