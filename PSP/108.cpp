#include <cstdio>
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

/* Initially, we will try the worst algorithm */
int main() {
  int N; cin >> N;
  vector< vector<int> > mat;
  for (int i=0; i<N; i++) {
    vi tmp;
    for (int j=0; j<N; j++) {
      int p; cin >> p;
      tmp.push_back(p);
    }
    mat.push_back(tmp);
  }
 
  int sum = 0, max_ = 0;
  for(int i=0; i<N; i++) {
    for (int j=0; j<N; j++) {
      for (int h=0; h<N; h++) {
        for (int k=0; k<N; k++) {
        }
      }
    }
  }
  return 0;
}
