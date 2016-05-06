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
  int t, iter=1; cin >> t;
  while(iter<=t) {
    float sum = 0;
    for (int i=0; i<4; i++) {
      int p; cin >> p;
      sum += p;
    }
    int min_ = 21;
    float sum1 = 0;
    for (int i=0; i<3; i++) {
      int p; cin >> p;
      sum1 += p;
      if (p<min_)
        min_ = p;
    }
    cout << "Case " << iter << ": ";
    sum += (sum1 - min_)/2.0;
    if ( sum >= 90 )
      printf("A\n");
    else if (sum >= 80)
      printf("B\n");
    else if (sum >= 70)
      printf("C\n");
    else if (sum >= 60)
      printf("D\n");
    else
      printf("F\n");
    iter++;
  }
  return 0;
}
