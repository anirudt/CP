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
  int N; scanf("%d", &N);
  while(N--) {
    int e,f,c;
    scanf("%d %d %d", &e, &f, &c);
    int n = e+f;
    int sum = n/c;
    while(n>=c) {
      n = n/c + n%c;
      sum += n/c;
    }
    printf("%d\n", sum);
  }
  return 0;
}
