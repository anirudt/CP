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

int digits(int n) {
  int k = 0;
  if (n==0) return 1;
  while(n > 0) {
    n /= 10;
    k++;
  }
  return k;
}

int main() {
  string str;
  while(getline(cin, str) && str != "END") {
    int k = str.size();
    if (str == "1") {
      printf("1\n");
      continue;
    }
    int prev = 0, iter = 1;
    while (prev != k) {
      prev = k;
      k = digits(k);
      iter++;
    }
    printf("%d\n", iter);
  }
  
  return 0;
}
