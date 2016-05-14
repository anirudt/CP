#include <cstdio>
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
  int N;
  scanf("%d\n", &N); printf("Lumberjacks:\n");
  while(N--) {
    bool inc = true, dec = true, kill = false;
    int a[10];
    for (int i=0; i<10; i++)
      scanf("%d", &a[i]);
    for (int i=1; i<10; i++) {
      if (a[i-1] > a[i]){
        if (inc) dec = false;
        else {
          kill = true;
        }
      }
      else if (a[i-1] < a[i]) {
        if (dec) inc = false;
        else {
          kill = true;
        }
      }
    }
    if (kill) printf("Unordered\n");
    else printf("Ordered\n");
    
  }
  return 0;
}
