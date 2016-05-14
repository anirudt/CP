#include <cstdio>
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

typedef pair<string, int> mypair;
bool compare(const mypair& l, const mypair& r) {
  return l.second > r.second;
}

int main() {
  int T; scanf("%d\n", &T);
  int iter = 1;
  while(T--) {
    vector<pair<string, int> > dict;
    for (int i=0; i<10; i++) {
      string s; int py;
      cin >> s >> py;
      pair<string, int> p;
      p.first = s;
      p.second = py;
      dict.push_back(p);
    }

    sort(dict.begin(), dict.end(), compare);
    int max_ = dict[0].second;
    printf("Case #%d:\n", iter);
    for (int i=0; i<10; i++) {
      if (dict[i].second == max_) {
        cout << dict[i].first << endl;
      }
      else break;
    }
    iter++;
  }
  return 0;
}
