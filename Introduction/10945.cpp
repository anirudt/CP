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
bool isPal(string s, map<char, char> dict) {
  int k = s.size();
  for (int i=0; i<=s.size()/2; i++) {
    if (s[i] != s[k-1-i])
      return false;
  }
  return true;
}


int main() {
  string str;
  while(getline(cin, str) && str != "DONE") {
    string sr;
    for (int i=0; i<str.size(); i++) {
      if (isalpha(str[i])) sr += tolower(str[i]);
    }
    string out(sr);
    reverse(out.begin(), out.end());
    if (out == sr) cout << "You won't be eaten!" << endl;
    else cout << "Uh oh.." << endl;
  }
  return 0;
}
