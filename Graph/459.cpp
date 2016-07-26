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

int G[26][26];
int visited[26];

void dfs(int i, int last) {
  visited[i] = 1;
  rep(j, last) {
    if (G[i][j] && !visited[j])
      dfs(j, last);
  }
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t; cin >> t;
  int iter = 0;
  string tmp;
  cin.ignore();
  getline(cin, tmp);
  while(t--) {
    if (iter) cout << endl;
    iter++;
    getline(cin, tmp); 
    int last = tmp[0] - 'A' + 1;
    int count = 0;
    string str;
    rep(i, last) {
      rep(j, last) {
        G[i][j] = 0;
      }
    }
    rep(i, last) {
      visited[i] = 0;
    }
    while(1) {
      if (!getline(cin, str) || str.empty()) break;
      G[str[0]-'A'][str[1]-'A'] = 1;
      G[str[1]-'A'][str[0]-'A'] = 1;
    }

    rep(i, last) {
      if (!visited[i]) {
        dfs(i, last);
        count++;
      }
    }
    cout << count << endl;
  }
  return 0;
}
