#include <cstdio>
#include <iostream>

using namespace std;

typedef long long ll;

ll process(ll n) {
  int count = 1;
  while(n!=1) {
    if (n%2==0) 
      n = n>>1;
    else
      n = 3*n + 1;
    count++;
  }
  return count;
}

int main() {
  int i, j;
  while(scanf("%d %d", &i, &j) != EOF) {
    int tmp;
    ll k;
    int max = 0;
    int min_ = i<j?i:j;
    int max_ = i>j?i:j;
    for (k = min_; k <= max_; k++) {
      tmp = process(k);
      if (tmp > max) 
	max = tmp; 
    }
    cout << i << " " << j << " " << max << endl;
  }
  return 0;
}
