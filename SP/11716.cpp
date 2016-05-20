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
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t; cin >> t;
  cin.ignore();
  string str;
  while(t--) {
    getline(cin, str);
    int l = str.size();
    int k = sqrt(l);
    if (k*k < l) {
      cout << "INVALID" << endl;
      continue;
    }
    else k = k;
    vector<vector<char> > arr;
    int c = 0;
    for (int i=0; i<k && c<l; i++) {
      vector<char> tmp;
      for (int j=0; j<k && c<l; j++) {
        tmp.push_back(str[c]);
        c++;
      }
      arr.push_back(tmp);
    }
    for (int i=0; i<k; i++) {
      for (int j=0; j<k; j++) {
        cout << arr[j][i];
      }
    }
    cout << endl;
  }
  return 0;
}
