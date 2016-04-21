#include <cstdio>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

typedef vector<int> vi;

int main() {
  int k;
  while(scanf("%d", &k) == 1 && k!=0) {
    int m, n;
    scanf("%d %d", &n, &m);
    while(k--) {
      int x, y;
      scanf("%d %d", &x, &y);
      int del_x = x-n; int del_y = y-m;
      if(del_x==0 || del_y==0)
        cout << "divisa" << endl;
      else if(del_x > 0 && del_y > 0)
        cout << "NE" << endl;
      else if(del_x > 0 && del_y < 0)
        cout << "SE" << endl;
      else if(del_x < 0 && del_y > 0)
        cout << "NO" << endl;
      else
        cout << "SO" << endl;
    }
  }
  return 0;
}
