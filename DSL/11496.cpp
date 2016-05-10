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
  int n;
  while(cin>>n, n) {
    vi music;
    int c = 0;
    for (int i=0; i<n; i++) {
      int p; cin >> p;
      music.push_back(p);
    }
    for (int i=0; i<music.size(); i++) {
      if (i==0) {
        // First Point
        if (music[0]>music[1] && music[0] > music[n-1]) c++;
        else if (music[0]<music[1] && music[0] < music[n-1]) c++;
      }
      else if (i==n-1) {
        if (music[n-1] >music[n-2] && music[n-1] > music[0]) c++;
        else if (music[n-1]<music[n-2] && music[n-1] < music[0]) c++;
      }
      else {
        // If not the first point
        if (music[i]>music[i-1] && music[i]>music[i+1]) c++;
        else if (music[i]<music[i-1] && music[i]<music[i+1]) c++;
      }
    }
    cout << c << endl;
  }
  return 0;
}
