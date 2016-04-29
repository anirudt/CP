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
  string s1, s2;
  while(getline(cin, s1)) {
    getline(cin, s2);
    vi a, b, c;
    int M, N;
    for (int i=s1.size()-1; i>=0; i--)
      a.push_back(s1[i]-48);
    for (int i=s2.size()-1; i>=0; i--)
      b.push_back(s2[i]-48);
    M = s1.size(); N = s2.size();
    for (int i=0; i<M+N; i++)
      c.push_back(0);
    int carry = 0;
    for (int i=0; i<M+N; i++) {
      c[i] += carry;
      for (int j=0; j<M; j++) {
        if (i-j>=0 && i-j<N)
          c[i] += a[j]*b[i-j];
      }
      carry = c[i]/10;
      c[i] %= 10;
    }
    int flag = 0;
    for (int i=M+N-1; i>=0; i--) {
      if (c[i]!=0) {
        flag = 1;
        break;
      }
    }
    bool toggle = false;
    if (flag==0) cout << 0;
    else {
      for (int i=M+N-1; i>=0; i--) {
        if (c[i] != 0) {
          toggle = true;
          cout << c[i];
        }
        else if (c[i]==0) {
          if (toggle)
            cout << c[i];
        }
      }
    }
    cout << endl;
  }
  return 0;
}
