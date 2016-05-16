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
  int t; scanf("%d", &t);
  while(t--) {
    int N;
    scanf("%d", &N);
    string iss;
    for (int i=1; i<=N; i++) {
      stringstream ss; ss << i;
      string s = ss.str();
      iss += s;
    }
    vi digits(10);
    for (int i=0; i<iss.size(); i++) 
      digits[iss[i]-'0']++;
    printf("%d", digits[0]);
    for (int i=1; i<10; i++)
      printf(" %d", digits[i]);
    printf("\n");
  }
  return 0;
}
