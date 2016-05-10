#include <cstdio>
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
  long x;
  while(scanf("%ld", &x) != EOF) {
    int y = 0, x1, x2, x3, x4;
    /* Why doesn't this work for negative numbers? */
    x1 = ((x&0x000000ff)<<24)&(0xff000000);
    x2 = ((x&0x0000ff00)<<8);
    x3 = (x&0x00ff0000)>>8;
    x4 = ((x&0xff000000)>>24);
    y = x1 | x2 | x3 | x4;
    printf("%d converts to %d\n", x, y);
  }
  return 0;
}
