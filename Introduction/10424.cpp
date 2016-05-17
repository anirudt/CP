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
int dig_sum(int n) {
  int k = n, sum;
  while(!(n/10 == 0 && n%10 != 0)) {
    sum = 0;
    while(n>0) {
      sum += n%10;
      n /= 10;
    }
    n = sum;
  }
  return n;
}

int main() {
  string str1, str2;
  while(getline(cin, str1)) {
    int a = dig_sum(31);
    getline(cin, str2);
    int k = 0, l = 0;
    for (int i=0; i<str1.size(); i++) {
      if (isalpha(str1[i])) {
        if (isupper(str1[i])) k += 1 + str1[i] - 'A';
        else k += 1 + str1[i] - 'a';
      }
    }
    k = dig_sum(k);

    for (int i=0; i<str2.size(); i++) {
      if (isalpha(str2[i])) {
        if (isupper(str2[i])) l += 1 + str2[i] - 'A';
        else l += 1 + str2[i] - 'a';
      }
    }
    l = dig_sum(l);
    float f = min(k,l)*100.0/max(k,l);
    printf("%.2f %\n", f);
  }

  return 0;
}
