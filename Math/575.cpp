#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <stack>
#include <climits>
#include <cmath>

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
    vi num;
    int sum = 0, pdt = 1;
    for (int i=str.size()-1; i>=0; i--) {
      int k = str[i]-48;
      pdt = pow(2, str.size()-i)-1;
      sum += k*pdt;
    }
    if (sum == 0) break;
    else cout << sum << endl;
  }
  return 0;
}
