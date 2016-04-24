#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>

#define NUM_MAX 4294967295

using namespace std;

typedef long long ll;

typedef vector<int> vi;
typedef vector<float> vf;
typedef vector<string> vs;

typedef map<int, int> mii;

/* Digit getter */
vi get_digs(int n) {
  vi dig;
  while(n>0) {
    dig.push_back(n%10);
    n /= 10;
  }
  return dig;
}

/* Palindrome checker */
int pal(ll a) {
  vi dig_a, dig_b;
  dig_a = get_digs(a);
  int len = dig_a.size();
  int flag = 0;
  for (int i=0; i<len; i++) {
    if (dig_a[i] != dig_a[len-1-i]) {
      flag = 1; break;
    }
  }
  return(flag == 0?1:-1);
}

int main() {
  int N; cin >> N;
  while(N--) {
    long long num, k; cin >> num;
    int iter = 0;
    while (num < NUM_MAX && iter <= 100) {
      vi dig; k = num;
      ll rev_num = 0;
      vi new_dig;
      dig = get_digs(num);
      ll pdt = 1;
      int len = dig.size();
      for(int i=0; i<len; i++) {
        // Update sum.
        rev_num += dig[len-1-i]*pdt;
        pdt *= 10;
      }
      if (pal(num) > 0) {
        cout << iter << " " << num << endl;
        break;
      }
      else
        num = num + rev_num;
      iter++;
    }
  }
  return 0;
}
