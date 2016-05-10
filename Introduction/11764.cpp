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
  int T, iter=1;
  scanf("%d", &T);
  while(iter<=T) {
    int N;
    scanf("%d", &N);
    vi arr;
    for (int i=0; i<N; i++) {
      int p; cin >> p;
      arr.push_back(p);
    }
    int l=0, h=0;
    for (int i=0; i<N-1; i++) {
      if (arr[i]>arr[i+1]) l++;
      else if (arr[i]<arr[i+1]) h++;
    }
    cout << "Case " << iter << ": ";
    cout << h << " " << l << endl;
    iter++;
  }
  return 0;
}
