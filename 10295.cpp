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
  int m, n;
  scanf("%d %d", &m, &n);
  map<string, int> dict;
  while(m--) {
    string str, s1;
    int p;
    cin >> s1 >> p;
    dict[s1] = p;
  }
  while(n--) {
    int sum = 0;
    string str;
    while(cin >> str && str.compare(".") != 0) {
      if (dict[str] != 0) {
        sum += dict[str];
      }
    }
    cout << sum << endl;
  }
  return 0;
}
