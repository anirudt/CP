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
  int x1, y1, x2, y2;
  while(scanf("%d %d %d %d", &x1, &y1, &x2, &y2) && (x1 > 0 || y1 > 0 || x2 > 0 || y2 > 0)) {
    if (x1 == x2 && y1 == y2) printf("0\n");
    else {
      int del_x = x2 - x1;
      int del_y = y2 - y1;
      if (del_x == 0 || del_y == 0 || del_x == -del_y || del_x == del_y) printf("1\n");
      else printf("2\n");
    }
  }
  return 0;
}
