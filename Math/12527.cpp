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

int compute(int n) {
  vi arr;
  for (int i=0; i<11; i++) arr.push_back(0);
  while(n!=0) {
    int k = n%10;
    if (arr[k] != 0) return 0;
    else arr[k]++;
    n /= 10;
  }
  return 1;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int N, M;
  while(cin >> N >> M) {
    int sum = 0;
    for (int i=N; i<=M; i++) {
      sum += compute(i);
    }
    cout << sum << endl;
  }
  return 0;
}
