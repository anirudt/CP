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
  string s1, s2, line;
  map<string, string> dict;
  /* Accept input for dict */
  while(getline(cin, line) && line.size()>0) {
    istringstream iss(line);
    iss >> s1;
    iss >> s2;
    dict[s2] = s1;
  }

  while(getline(cin, line)) {
    if (dict[line].compare("") == 0)
      cout << "eh" << endl;
    else
      cout << dict[line] << endl;
  }
  return 0;
}
