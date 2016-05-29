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

#define rep(i, n) for (int i=0; i<(n); ++i)

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
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int n;
  while(cin >> n, n) {
    vi arr;
    rep(i, n) {
      int p; cin >> p;
      arr.push_back(p);
    }
    int sum = 0, max = 0;
    rep(i, n) {
      if (sum+arr[i]>0) {
        sum += arr[i];
        if (sum > max) max = sum;
      }
      else sum = 0;
    }
    if (sum<=0) cout << "Losing streak." << endl;
    else cout << "The maximum winning streak is " << max << "." << endl;
    
  }
  return 0;
}
