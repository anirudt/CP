#include <cstdio>
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
  int T; cin >> T;
  while(T--) {
    int N; cin >> N;
    int P; cin >> P;
    vi bin(N+1);
    int c = 0;
    for (int i=0; i<P; i++) {
      int p; cin >> p;

      for (int j=p; j<=N; j+=p) {
        if (j%7==0 || j%7==6) {
          bin[j] = 0;
          continue;
        }
        else
          bin[j] = 1;
      }
    }
    for (int i=1; i<=N; i++) {
      if (bin[i]==1) c++;
    }
    cout << c << endl;
  }
  return 0;
}
