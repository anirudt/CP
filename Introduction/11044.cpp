#include <cstdio>
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
  int t; cin >> t;
  while(t--) {
    int m, n;
    scanf("%d %d", &m, &n);
    if (m>=3 || n>=3) printf("%d\n", (m/3)*(n/3));
    else              printf("1\n");
  }
  return 0;
}
