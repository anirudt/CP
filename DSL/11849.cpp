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
  int N, M;
  while(scanf("%d %d\n", &N, &M) != EOF && (N > 0 && M > 0)) {
    set<int> jack, jill;
    for (int i=0; i<N; i++) {
      int p; scanf("%d", &p);
      jack.insert(p);
    }
    for (int i=0; i<M; i++) {
      int p; scanf("%d", &p);
      jill.insert(p);
    }
    vi v(1000000);
    vi::iterator it;
    it = set_intersection(jack.begin(), jack.end(), 
        jill.begin(), jill.end(), v.begin());
    v.resize(it - v.begin());
    cout << v.size() << endl;
  }

  return 0;
}
