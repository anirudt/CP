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
  int t;
  while(scanf("%d", &t) != EOF) {
    queue<int> Q;
    stack<int> S;
    priority_queue<int> P;
    bool st = true, qu = true, pr = true, impo = false;
    while(t--) {
      int a, b; scanf("%d %d", &a, &b);
      if (a==1) {
        S.push(b);
        Q.push(b);
        P.push(b);
      }
      if (a==2) {
        if (S.size() <= 0) {
          impo = true;
        }
        else {
          if (S.top() != b) {
            st = false;
            S.pop();
          }
          else {
            S.pop();
          }
          if (P.top() != b) {
            pr = false;
            P.pop();
          }
          else {
            P.pop();
          }
          if (Q.front() != b) {
            qu = false;
            Q.pop();
          }
          else {
            Q.pop();
          }
        } 
      }
    }
    if (impo || (!qu && !st && !pr)) cout << "impossible" << endl;
    else {
      if (st && qu || st && pr || pr && qu) cout << "not sure" << endl;
      else if (st) cout << "stack" << endl;
      else if (qu) cout << "queue" << endl;
      else if (pr) cout << "priority queue" << endl;
    }
  }
  return 0;
}
