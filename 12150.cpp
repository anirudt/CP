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
  int N, C, P;
  while(cin >> N, N) {
    vi curr, start, del;
    int flag = 0;
    for (int i=0; i<N; i++)
      start.push_back(0);
    for (int i=0; i<N; i++) {
      cin >> C >> P;
      if (i+P < 0 || i+P > N-1) {
        flag = 1;
      }
      else {
        if (start[i+P] != 0) {
          // Already filled, no place
          flag = 1;
        }
        else
          start[i+P] = C;
      }
    }
    if (flag==1)
      printf("-1");
    else {
      printf("%d", start[0]);
      for (int i=1; i<start.size(); i++)
        printf(" %d", start[i]);
    }
    printf("\n");
  }
  return 0;
}
