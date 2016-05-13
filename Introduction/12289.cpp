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
    if (str.size() == 5) printf("3\n");
    else {
      if (str[0] == 'o' && str[1] == 'n' || str[2] == 'e' && str[0] == 'o' || str[1]=='n' && str[2]=='e') printf("1\n");
      else printf("2\n");
    }
  }
  return 0;
}
