#include <cstdio>
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
typedef pair<int, int> ii;
typedef vector< ii > vii;
typedef vector<float> vf;
typedef vector<string> vs;
typedef vector<vi> vi2d;
typedef vector<ll> vll;

typedef map<int, int> mii;

// Glob Var Defs

/* Descending order not preservind idx */
bool comparer(const ii& l, const ii& r) {
  if (l.second > r.second) return true;
}

int main() {
  int n;
  while(cin >> n, n) {
    vector< vector <int> > subs;
    mii dict; 
    for (int i=0; i<n; i++) {
      int a,b,c,d,e; 
      cin>>a>>b>>c>>d>>e;
      vi tmp;
      tmp.push_back(a);
      tmp.push_back(b);
      tmp.push_back(c);
      tmp.push_back(d);
      tmp.push_back(e);
      subs.push_back(tmp);
      dict[a]++; dict[b]++;
      dict[c]++; dict[d]++;
      dict[e]++;
    }
    vii mapcopy(dict.begin(), dict.end());
    sort(mapcopy.begin(), mapcopy.end(), comparer);

    vi chosen;
    int max_ = mapcopy[0].second;
    chosen.push_back(mapcopy[0].first)
    for (i=0; i<mapcopy.size(); i++) {
      if (mapcopy[i].second == max_) {
        chosen.push_back(mapcopy[i].first);
      }
      else break;
    }

    /* Run and check number of students */
  }
  return 0;
}
