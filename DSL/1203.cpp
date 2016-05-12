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

int main() {
  string str;
  priority_queue<pair<int, int>, vector<pair<int, int> >, greater<pair<int, int> > > q;
  mii dict;
  vi qnum, times;
  while(getline(cin, str) && str != "#") {
    istringstream iss(str);
    string s; int sno, t;
    iss >> s;
    iss >> sno;
    iss >> t;
    qnum.push_back(sno);
    times.push_back(t);
  }
  int k; cin >> k;
  for (int i=0; i<times.size(); i++) {
    for (int j=1; j<=k; j++) {
      pair<int, int> p;
      p.second = qnum[i];
      p.first = j*times[i];
      q.push(p);
    }
  }

  int i=0, count = 0;
  while(count < k) {
    pair<int, int> p = q.top();
    if (i >= p.first) {
      cout << p.second << endl;
      q.pop();
      count++;
    }
    i++;
  }
  return 0;
}
