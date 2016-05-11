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

#define min_(a, b) (a<b?a:b)

// Glob Var Defs

int main() {
  int t; cin >> t;
  while(t--) {
    char a; int m, n;
    cin >> a >> m >> n;
    switch(a) {
      case 'r':
      case 'Q': printf("%d\n", min_(m, n));
                break;
      case 'K': printf("%d\n", ((m+1)/2) * ((n+1)/2));
                break;
      case 'k': printf("%d\n", (m*n+1)/2);
                break;
    }
  }
  return 0;
}
