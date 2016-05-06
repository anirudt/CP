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
  int t;
  cin >> t;
  while(t--) {
    int n; cin >> n;
    int k = n;
    ll sub = (k*63+7492)*5-498;
    sub = sub/10; 
    sub = sub > 0 ? sub : -sub;
    printf("%lld\n", sub%10);
  }
  return 0;
}
