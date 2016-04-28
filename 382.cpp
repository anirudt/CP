#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <stack>
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
  ll p;
  printf("PERFECTION OUTPUT\n");
  while(cin >> p, p) {
    if (p<10) cout << "    ";
    else if (p<100) cout << "   ";
    else if (p<1000) cout << "  ";
    else if (p<10000) cout << " ";
    printf("%lld", p);
     
    // Calculating sum of factors
    ll sum = 0;
    for (ll i=1; i<=p/2; i++) {
      if (p%i==0)
        sum += i;
    }
    if (sum > p)
      printf("  ABUNDANT\n");
    else if (sum < p)
      printf("  DEFICIENT\n");
    else
      printf("  PERFECT\n");
  }
  printf("END OF OUTPUT\n");
  return 0;
}
