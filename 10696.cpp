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

//Glob Var Defs
vll cache;


ll f91(ll n) {
  if (cache[n]>0)
    return cache[n];
  else if (n<=100) {
    cache[n] = f91(f91(n+11));
    return cache[n];
  }
  else if (n>=101) {
    cache[n] = n-10;
    return cache[n];
  }
}

int main() {
  ll n;
  for (ll i=0; i<=1000000; i++)
    cache.push_back(0);
  while(cin >> n && n!=0) {
    ll ans = f91(n);
    printf("f91(%lld) = %lld\n", n, ans);
  }
  return 0;
}
