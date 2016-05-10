#include <cstdio>
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
  int n;
  while(scanf("%d", &n) != EOF && n!=0) {
    queue<int> q;
    for (int i=0; i<n; i++)
      q.push(i+1);
    vi discarded;
    while(q.size() >= 2) {
      discarded.push_back(q.front());
      q.pop();
      int p = q.front();
      q.pop();
      q.push(p);
    }
    if (discarded.size()>=1) {
      cout << "Discarded cards: " << discarded[0];
      for (int i=1; i<discarded.size(); i++)
        cout << ", " << discarded[i]; 
      cout << endl;
    }
    else {
      cout << "Discarded cards:" << endl;
    }
    cout << "Remaining card: " << q.front() << endl;
  }
  return 0;
}
