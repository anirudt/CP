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

int main() {
  int n;
  while(scanf("%d", &n) && n > 0) {
    vector<vector<int> > arr;
    vi rowsum, colsum;
    for (int i=0; i<n; i++) {
      vi tmp;
      rowsum.push_back(0);
      colsum.push_back(0);
      for (int j=0; j<n; j++) {
        int p; cin >> p;
        tmp.push_back(p);
      }
      arr.push_back(tmp);
    }

    for (int i=0; i<n; i++) {
      for (int j=0; j<n; j++) {
        rowsum[i] += arr[i][j];
        colsum[i] += arr[j][i];
      }
    }
    int row = 0, col = 0, row_ = 0, col_ = 0;
    bool flag1 = true, flag2 = true;
    for (int i=0; i<rowsum.size(); i++) {
      if (rowsum[i]%2 == 1) {
        row = i; 
        flag1 = false;
        row_++;
      }
    }
    for (int i=0; i<colsum.size(); i++) {
      if (colsum[i]%2 == 1) {
        col = i; 
        flag2 = false; 
        col_++;
      }
    }
    if (flag1 && flag2) cout << "OK" << endl;
    else if (row_ >= 2 || col_ >= 2) cout << "Corrupt" << endl;
    else if (row_ > 0 && col_ == 0 || row_==0 && col_>0) cout << "Corrupt" << endl;
    else if (row_ == 1 && col_ == 1) printf("Change bit (%d,%d)\n", row+1, col+1);

  }
  return 0;
}
