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
  int n; cin >> n;
  while(n--) {
    int a, b;
    cin >> a >> b;
    int h = (a+b);
    int k = (a-b);

    if (h>=k && h>=0 && k>=0 && h%2==0 && k%2==0) printf("%d %d\n", h/2, k/2);
    else cout << "impossible" << endl;
  }
  return 0;
}
