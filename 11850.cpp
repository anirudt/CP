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
  int N;
  while(cin>>N, N) {
    vi arr; arr.push_back(0);
    for(int i=0; i<N; i++) {
      int p; cin >> p;
      arr.push_back(p);
    }
    sort(arr.begin(), arr.end());
    int flag = 0, max = 0;
    max = arr[arr.size()-1];
    if (2*(1422 - max) > 200)
      flag = 1;
    for (int i=0; i<arr.size()-1 && flag==0; i++) {
      if (arr[i+1] - arr[i] > 200) {
        flag = 1;
        break;
      }
    }
    printf(flag==1?"IMPOSSIBLE\n" : "POSSIBLE\n");
  }
  return 0;
}
