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
  int T; cin >> T;
  while(T--) {
    int n, t, m;
    cin >> n >> t >> m;
    queue<int> left, right;
    int max_ = 0;
    for (int i=0; i<m; i++) {
      string s; int p;
      cin >> p >> s;
      if (s == "left")
        left.push(p);
      else
        right.push(p);
      max_ = max(max_, p);
    }

    /* Simulate the ferry */
    int time = 0;
    bool flag = true;
    int i, j;
    while(time <= max_+t) {
      i = 0; j = 0;
      int rf, lf;
      rf = right.size() > 0 ? right.front() : -1;
      lf = left.size() > 0 ? left.front() : -1;
      if (!flag && right.size() == 0) {
        flag = true;
      }
      else if (flag && left.size() == 0) {
        flag = false;
      }
      else {
        //cout << rf << " " << lf << " " << time << endl;
        if (rf > time && lf > time) flag = flag;
        else {
          cout << "Time " << time << endl;
          while(left.size() > 0 && left.front() <= time && flag && i<n) {
            //printf("%d Lala %d\n", left.front(), time);
            printf("%d\n", time+t);
            left.pop();
            i++;
          }
          while(right.size() > 0 && right.front() <= time && !flag && j<n) {
            //printf("%d Rara %d\n", right.front(), time);
            printf("%d\n", time+t);
            right.pop();
            j++;
          }
          flag = !flag;
        }
      }
      time += t;
    }
    cout << endl;
  }
  return 0;
}
