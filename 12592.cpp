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
  int n; cin >> n;
  cin.ignore();
  map<string, string> dict;
  while(n--) {
    string s1, s2;
    getline(cin, s1); getline(cin, s2);
    dict[s1] = s2;
  }
  int q; cin >> q;
  cin.ignore();
  while(q--) {
    string s; getline(cin, s);
    cout << dict[s] << endl;
  }
  return 0;
}
