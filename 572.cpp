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
typedef vector< vector<int> > vii;
typedef vector<float> vf;
typedef vector<string> vs;
typedef vector<vi> vi2d;
typedef vector<ll> vll;

typedef map<int, int> mii;

// Glob Var Defs

int main() {
  int m, n;
  while(scanf("%d %d", &m, &n) != EOF && m != 0) {
    vector< vector<char> > oil;
    vii traversed;
    for (int i=0; i<m; i++) {
      vector<char> tmp;
      vi temp;
      for (int j=0; j<n; j++) {
        char p; cin >> p;
        tmp.push_back(p);
        temp.push_back(0);
      }
      oil.push_back(tmp);
      traversed.push_back(temp);
    }

    int c = 0;
    for (int i=0; i<m; i++) {
      for (int j=0; j<n; j++) {
        int prev_row = i-1 >= 0 ? i-1 : 0;
        int prev_col = j-1 >= 0 ? j-1 : 0;
        int next_row = i+1 < m  ? i+1 : m-1;
        int next_col = j+1 < n  ? j+1 : n-1;
        cout << i << " " << j << " " << c << endl;
        if (oil[i][j] == '@') {
          /* Check if surroundings have been checked
           * already
           */
          if (traversed[prev_row][prev_col] || traversed[prev_row][j] || traversed[prev_row][next_col] ||
              traversed[i][prev_col] || traversed[i][j] || traversed[i][next_col] ||
              traversed[next_row][prev_col] || traversed[next_row][j] || traversed[next_row][next_col]) {
            c = c;
          }
          else {
            cout << "updating" << endl;
            c++;
          }
          for (int del_x = prev_row; del_x <= next_row; del_x++) {
            for (int del_y = prev_col; del_y <= next_col; del_y++) {
              if (oil[del_x][del_y] == '@')
                traversed[del_x][del_y] = 1;
            }
          }
          for (int l=0; l<m; l++) {
            for (int k=0; k<n; k++) 
              cout << traversed[l][k] << " ";
            cout << endl;
          }
          cout << endl;
        }
      }
    }
    cout << c << endl;
  }
  return 0;
}
