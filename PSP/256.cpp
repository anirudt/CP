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
int digits(int n) {
  int k=0;
  if (n==0) return 1;
  while(n>0) {
    n = n/10;
    k++;
  }
  return k;
}

int main() {
  int p;
  while(scanf("%d", &p) != EOF) {
    p = p >> 1;
    int max_ = pow(10, p);
    vi squares;
    for (int i=0; i<max_; i++) 
      squares.push_back(i*i);
    int k = pow(10, p);
    for (int i = 0; i < squares.size(); i++) {
      int a = squares[i] % k;
      int b = squares[i] / k;
      if ((a+b)*(a+b) == squares[i]) {
        if (digits(b)<p) {
          for (int i=1; i<=p-digits(b); i++) {
            cout << "0";
          }
          cout << b;
        }
        else cout << b;
        if (digits(a)<p) {
          for (int i=1; i<=p-digits(a); i++) {
            cout << "0";
          }
          cout << a << endl;
        }
        else cout << a << endl;
      }
    }
  }

  return 0;
}
