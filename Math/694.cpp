#include <cstdio>
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
  ll a, L, n;
  ll c = 1;
  while(scanf("%lld %lld", &a, &L) != EOF && (a>0 || L>0)) {
    ll iter = 1;
    n = a;
    while(1) {
      if (a<=1) break;
      if (a%2==0)
        a = a>>1;
      else
        a = 3*a+1;
      if (a>L) break;
      iter++;
    }
    cout << "Case " << c << ": ";
    cout << "A = " << n << ", limit = " << L << ", ";
    cout << "number of terms = " << iter << endl;
    c++;
  }
  return 0;
}
