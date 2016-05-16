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
  int n;
  while(scanf("%d", &n) != EOF && n > 0) {
    int sum = n/3;
    while(n>=3) {
      n = n/3 + n%3;
      sum += n/3;
    }
    if (n == 2) sum++;
    printf("%d\n", sum);
  }
  return 0;
}
