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
  int T; scanf("%d\n", &T);
  while(T--) {
    int n; scanf("%d\n", &n);
    int p = 0;
    vector<char> isr;
    for (int i=0; i<n; i++) {
      string s;
      cin >> s;
      if (s == "LEFT") {
        p--;
        isr.push_back('L');
      }
      else if (s == "RIGHT") {
        p++;
        isr.push_back('R');
      }
      else {
        cin >> s;
        int k;
        cin >> k;
        if (isr[k-1] == 'L') {
          p--;
          isr.push_back('L');
        }
        else {
          p++;
          isr.push_back('R');
        }
      }
    }
    printf("%d\n", p);
  }
  return 0;
}
