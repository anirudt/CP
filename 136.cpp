#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

typedef long long ll;

typedef vector<int> vi;
typedef vector<float> vf;
typedef vector<string> vs;
typedef vector<vi> vi2d;

typedef map<int, int> mii;

int main() {
  int iter = 1, n=1, k = 1;
  while(iter<=1500) {
    n = k;
    while (n%2==0) {
      n = n/2;
    }
    while (n%3==0) {
      n = n/3;
    }
    while (n%5 == 0) {
      n = n/5;
    }
    if (n>1)
      k++;
    else {
      cout << k << " " << iter << endl;
      iter++;
      k++;
    }
  }
  return 0;
}
