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
  int t, iter = 1; scanf("%d", &t);
  while(t--) {
    vi arr;
    int N; scanf("%d", &N);
    for (int i=0; i<N; i++) {
      int p; scanf(" %d", &p);
      arr.push_back(p);
    }
    sort(arr.begin(), arr.end());
    printf("Case %d: %d\n", iter, arr[arr.size()/2]);
    iter++;
  }
  return 0;
}
