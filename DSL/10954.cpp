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
  int N;
  while(scanf("%d", &N) != EOF && N!=0) {
    priority_queue<int> P;
    for (int i=0; i<N; i++) {
      int p; cin >> p;
      P.push(-p);
    }
    int i = 0, sum = 0, tmp = 0;
    while(P.size()!= 1) {
      tmp = -P.top();
      P.pop();
      tmp += -P.top();
      P.pop();
      P.push(-tmp);
      sum += tmp;
    }
    cout << sum << endl;
  }
  return 0;
}
