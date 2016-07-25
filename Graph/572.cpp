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
vi2d visited;
vs arr;

void floodfill(int i, int j, int m, int n) {
  if (i<0 || i>=m || j<0 || j>=n || visited[i][j]!=0)
    return;
  if (arr[i][j]=='*') return;
  visited[i][j] = 1;
  floodfill(i-1, j, m , n);
  floodfill(i-1, j-1, m , n);
  floodfill(i-1, j+1, m , n);
  floodfill(i+1, j-1, m , n);
  floodfill(i+1, j, m , n);
  floodfill(i+1, j+1, m , n);
  floodfill(i, j-1, m , n);
  floodfill(i, j+1, m , n);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int m, n, ans;
  while(cin >> m >> n && (m!=0 && n!=0)) {
    int count = 0;
    cin.ignore();
    rep(i, m) {
      vi tmp;
      rep(j, n) {
        tmp.pb(0); 
      }
      visited.pb(tmp);
    }
    rep(i, m) {
      string str;
      getline(cin, str);
      arr.pb(str);
    }
    rep(i,m) {
      rep(j,n) {
        if (!visited[i][j]) {
          if (arr[i][j] == '@') {
            count++;
            floodfill(i, j, m, n);
          }
          else visited[i][j] = 1;
        }
      }
    }
    cout << count << endl;
    arr.clear();
    visited.clear();
  }
  return 0;
}
