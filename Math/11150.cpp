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
  int N; 
  while(scanf("%d", &N) != EOF) {
    int sum = N, k = N;
    while (N >= 3) {
      sum += N/3;
      N = N%3 + N/3;
    }
    if (N==2) sum++;
    printf("%d\n", sum);
  }
  return 0;
}
