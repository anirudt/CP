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

#define rep(i, n) for(int i = 0; i < (n); ++i)
#define forn(i, a, b) for(int i = (a); i < (b); ++i)
#define ford(i, a, b) for(int i = (a); i >= (b); --i)
#define fore(i, a, b) forn(i, a, b + 1)

#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define mset(a, v) memset(a, v, sizeof(a))
#define sz(a) ((int)a.size())

#define gi(x) scanf("%d", &x)
#define pis(x) printf("%d ", x)
#define pin(x) printf("%d\n", x)
#define pnl printf("\n")
#define dbn cerr << "\n"
#define dbg(x) cerr << #x << " : " << (x) << " "
#define dbs(x) cerr << (x) << " "

#define foreach(c, it) for(__typeof(c.begin()) it = c.begin(); it != c.end(); ++it)

// Glob Var Defs

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin >> t;
  while(t--) {
    int F; cin >> F;
    vi r, b;
    for (int i=0; i<F; i++) {
      int p; cin >> p;
      if (p<0) r.pb(-p);
      else b.pb(p);
    }
    sort(r.begin(), r.end(), greater<int>());
    sort(b.begin(), b.end(), greater<int>());
    int i = 0, j = 0;
    bool toggle = true;
    toggle = r[0]>b[0] ? true : false;
    if (toggle) i = 1;
    else j = 1;
    int c = 1;
    while (i<r.size() && j<b.size()) {
      if (toggle) {
        if (r[i] < b[j]) {
          toggle = false;
          c++;

        }
        else i++;
      }
      else {
        if (r[i]>b[j]) {
          toggle = true;
          c++;
        }
        else j++;
      }
    }
    if (i==r.size() && b[j] < r[i-1] || j==b.size() && r[i] < b[j-1]) c++;
    cout << c << endl;
  }

  return 0;
}
