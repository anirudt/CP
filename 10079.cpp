#include <cstdio>
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
  ll N, sum;
  while(scanf("%lld", &N) != EOF && N >= 0) {
    sum = N*(N+1)/2 + 1;
    printf("%lld\n", sum);
  }
  return 0;
}
