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
  while (cin >> N && N!=0) {
    string str;
    vi L, R; int l, r;
    for(int i=0; i<N; i++) {
      getline(cin, str);
      int j = 0;
      while (str[j]=='X' && str[j+1]=='B')
        j++;
      cout << j << endl;
      L.push_back(j);
      while (str[j]=='B' && str[j+1]=='X')
        j++;
      cout << j << endl;
      R.push_back(j);
    }
  }
  return 0;
}
