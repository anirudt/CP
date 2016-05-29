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
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int n, iter = 1;
  while(cin >> n, n) {
    cout << "Case " << iter << ":" << endl;
    vll arr;
    for (int i=0; i<n; i++) {
      ll p; cin >> p;
      arr.push_back(p);
    }
    vll sim;
    for (int i=0; i<n; i++) {
      for (int j=i+1; j<n; j++) {
        sim.push_back(arr[i]+arr[j]);
      }
    }
    int m; cin >> m;
    for (int i=0; i<m; i++) {
      ll p; cin >> p;
      ll min = abs(sim[0] - p);
      ll idx = sim[0];
      for (ll i=0; i < sim.size(); i++) {
        if (min > abs(sim[i] - p)) {
          min = abs(sim[i]-p);
          idx = sim[i];

        }
      }
      cout << "Closest sum to " << p << " is " <<  idx << "." << endl;
    }
    iter++;
  }
  return 0;
}
