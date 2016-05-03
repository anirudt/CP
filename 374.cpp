#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <stack>
#include <climits>

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
  cout << INT_MAX << endl;
  ll B, P, M;
  while(scanf("%lld\n%lld\n%lld\n", &B, &P, &M) != EOF) {
    ll R, i=0;
    R = B%M;
    ll pdt = R;
    ll r;
    while( i<P ) {
      pdt = R*pdt;
      r = pdt % M;
      cout << r << endl;
      i++;
    }
    cout << r << endl;
    char *s;
    scanf("%s", s);
  }
  return 0;
}
