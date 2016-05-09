#include <cstdio>
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

int getangle(int s, int f, bool clock) {
  if (clock) {
    if (s == f) return 0;
    else if (f>s) return 9*(40 - (f-s));
    else return 9*(s-f);
  }
  else {
    if (s==f) return 0;
    else if (s>f) return 9*(40-(s-f));
    else return 9*(f-s);

  }
}

int main() {
  int a, b, c, d;
  while(scanf("%d %d %d %d", &a, &b, &c, &d) != EOF && (a>0 || b>0 || c>0 || d>0)) {
    int ans = 1080;
    ans += getangle(a,b,true);
    ans += getangle(b,c,false);
    ans += getangle(c,d,true);
    printf("%d\n", ans);
  }
  return 0;
}
