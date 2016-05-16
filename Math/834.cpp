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
  int a, b;
  while(scanf("%d %d", &a, &b) != EOF) {
    int h, k;
    int b0 = a/b;
    h = a - b0*b;
    k = b;
    vi arr;
    bool flag = true;
    while(h > 0 && k > 0) {
      int tmp;
      if (flag) {
        // initially k -> denom, h -> numer
        tmp = k/h;
        k = k - tmp*h;
      }
      else {
        tmp = h/k;
        h = h - tmp*k;
      }
      flag = ~flag;
      arr.push_back(tmp);
      swap(h, k);
    }
    if (arr.size() == 0) arr.push_back(0);
    printf("[%d;%d", b0, arr[0]);
    for (int i=1; i<arr.size(); i++)
      printf(",%d", arr[i]);
    printf("]\n");
  }
  return 0;
}
