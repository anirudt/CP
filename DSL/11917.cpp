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
  int t; cin >> t;
  int iter = 1;
  while(t--) {
    int n; cin >> n;
    cin.ignore();
    string s; int p;
    vi data;
    int max_ = 0;
    map<string, int> dict;
    for (int i=0; i<n;i++) {
      cin >> s >> p;
      dict[s] = p;
    }
    int D;
    cin >> D >> s;
    printf("Case %d: ", iter);
    if (dict[s] == 0 || dict[s] > D+5) printf("Do your own homework!\n");
    else if (dict[s] <= D) printf("Yesss\n");
    else printf("Late\n");
    iter++;
  }
  return 0;
}
