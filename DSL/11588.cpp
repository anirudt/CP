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
  int X, iter = 1; cin >> X;
  while(X--) {
    int R, C, M, N;
    cin >> R >> C >> M >> N;
    vi freq;
    for (int i=0; i<26; i++) freq.pb(0);
    for (int i=0; i<R*C; i++) {
      char p; cin >> p;
      freq[p-'A']++;
    }
    int max = 0;
    for (int i=0; i<freq.size(); i++) {
      if (freq[i] > max) max = freq[i];
    }
    int c = 0;
    for (int i=0; i<freq.size(); i++) {
      if (freq[i] == max) c++;
    }
    int cost = max*c*M + (R*C-c*max)*N;
    cout << "Case " << iter << ":" << " " << cost << endl;
    iter++;
  }
  return 0;
}
