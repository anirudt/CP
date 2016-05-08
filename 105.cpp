#include <cstdio>
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
  int l, h, r;
  int L[6000], H[6000], R[6000];
  int skyline[50000];
  int i=0, j, max_R = 0;
  while(scanf("%d %d %d", &L[i], &H[i], &R[i]) != EOF) {
    for (int k=L[i]; k<R[i]; k++) {
      if (H[i]>skyline[k])
        skyline[k] = H[i];
    }
    /* Get max R */
    if (R[i] > max_R) max_R = R[i];
    i++;
  }
  /* Get hori now */
  int curr = 0;
  vi finale;
  for (int j = 0; j<max_R+1; j++) {
    if (skyline[j] != curr) {
      finale.push_back(j);
      finale.push_back(skyline[j]);
      curr = skyline[j];
    }
  }
  printf("%d", finale[0]);
  for (int i=1; i<finale.size(); i++)
    printf(" %d", finale[i]);
  cout << endl;
  return 0;
}
