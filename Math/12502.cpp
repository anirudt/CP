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
  while(t--) {
    int x, y, z;
    scanf("%d %d %d", &x, &y, &z);
    int a = z*(x+(x-y))/(x+y);
    if (a > 0) printf("%d\n", a);
    else printf("0\n");
  }
  return 0;
}
