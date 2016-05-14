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
  int T; scanf("%d", &T);
  int sum = 0;
  while(T--) {
    string str; cin >> str;
    if (str == "donate") {
      int K; scanf("%d", &K);
      sum += K;
    }
    else {
      printf("%d\n", sum);
    }
  }
  return 0;
}
