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

bool compare(string x, string y) {
  string t1 = x+y;
  string t2 = y+x;
  if (t1 > t2) return true;
  else return false;
}
int main() {
  int N;
  while(scanf("%d", &N) != EOF && N > 0) {
    vs arr;
    for(int i=0; i<N; i++) {
      string s; cin >> s;
      arr.push_back(s);
    }
    sort(arr.begin(), arr.end(), compare);
    for (int i=0; i<N; i++) cout << arr[i];
    cout << endl;
  }
  return 0;
}
