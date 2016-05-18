#include <cstdio>
#include <set>
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
  string str;
  while(getline(cin, str)) {
    istringstream iss(str);
    string s;
    iss >> s;
    reverse(s.begin(), s.end());
    cout << s;
    while(iss >> s) {
      cout << " ";
      reverse(s.begin(), s.end());
      cout << s;
    }
    cout << endl;
  }
  return 0;
}
