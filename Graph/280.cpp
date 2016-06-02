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
typedef vector<bool> vb;
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
vi2d graph;
vector<bool> visited;

void DFS(int p) {
  int n = graph[p].size();
  rep(i, n) {
    if (visited[graph[p][i]] == false) {
      visited[graph[p][i]] = true;
      DFS(graph[p][i]);
    }
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int n;
  while(cin >> n, n) {
    graph.assign(n, vi());
    int k, l;
    while(cin >> k, k) {
      while (cin >> l, l)
        graph[k-1].pb(l-1);
    }
    int m; cin >> m;
    rep(i, m) {
      int p; cin >> p;
      visited.assign(n, false);
      DFS(p-1);
      int sum = 0;
      vi out;
      rep(i, n) {
        if (!visited[i]) {
          sum++;
          out.pb(i+1);
        }
      }
      if (sum==0) cout << 0 << endl;
      else {
        cout << sum;
        rep(i, out.size()) cout << " " << out[i];
        cout << endl;
      }
    }
  }
  return 0;
}
