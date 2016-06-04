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
typedef pair<int, int> mypair;
bool compare(const mypair& l, const mypair& r) {
  if (r.second > l.second) return true;
  if (r.second < l.second) return false;
  else return (l.first > r.first);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  string str;
  int i = 0;
  while(getline(cin, str)) {
    if (i!=0) cout << endl;
    map<char, int> dict;
    rep(i, str.size()) {
      dict[str[i]]++;
    }
    vector<pair<int, int> > arr(dict.begin(), dict.end());

    sort(arr.begin(), arr.end(), compare);
    vector<mypair>::iterator it;
    for (it = arr.begin(); it < arr.end(); it++) {
      cout << it->first << " " << it->second << endl;
    }
    i++;
  }
  return 0;
}
