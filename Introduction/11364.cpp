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
  int t; cin >> t;
  while(t--) {
    int n; cin >> n;
    int sum = 0, diff = 0, p;
    vi arr;
    for (int i=0; i<n; i++) {
      cin >> p;
      arr.push_back(p);
    }
    sort(arr.begin(), arr.end());
    diff += arr[arr.size()-1] - arr[0];
    for (int i=1; i<n; i++)
      diff += arr[i] - arr[i-1];
    printf("%d\n", diff);
  }
  return 0;
}
