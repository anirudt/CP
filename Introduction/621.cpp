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
  int t; scanf("%d\n", &t);
  while(t--) {
    string str;
    getline(cin, str);
    if (str == "1" || str == "4" || str=="78") printf("+\n");
    else {
      if (str[str.size()-2] == '3' && str[str.size()-1] == '5') printf("-\n");
      else if (str[0] == '9' && str[str.size()-1] == '4') printf("*\n");
      else printf("?\n");
    }
  }
  return 0;
}
