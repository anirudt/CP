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
  string str; int iter = 1;
  while(getline(cin, str) && str != "*") {
    if (str == "Hajj") printf("Case %d: Hajj-e-Akbar\n", iter);
    else printf("Case %d: Hajj-e-Asghar\n", iter);
    iter++;
  }
  return 0;
}
