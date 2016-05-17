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
int count_ones(int a) {
  int sum = 0;
  while(a>0) {
    sum += a%2;
    a = a >> 1;
  }
  return sum;
}


int main() {
  int N; scanf("%d", &N);
  while(N--) {
    int M; scanf("%d", &M);
    int b1, b2 = 0, k = M;
    b1 = count_ones(M);
    while(M>0) {
      int tmp = M%10;
      b2 += count_ones(tmp);
      M = M/10;
    }
    printf("%d %d\n", b1, b2);
  }

  return 0;
}
