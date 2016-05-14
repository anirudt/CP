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
  int t, iter = 0; scanf("%d\n\n", &t);
  while(t--) {
    if (iter != 0) printf("\n");
    int w; scanf("%d\n", &w);
    vi arr;
    for (int i=0; i<w; i++) {
      int a, b;
      scanf("%d %d", &a, &b);
      arr.push_back(a-b);
    }
    bool flag = true;
    for(int i=1; i<arr.size(); i++) {
      if (arr[i] != arr[i-1]) {
        flag = false;
        break;
      }
    }
    printf(flag ? "yes\n" : "no\n");
    iter++;
  }
  return 0;
}
