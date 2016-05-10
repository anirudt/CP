#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

typedef vector<int> vi;

int main() {
  int b1, b2, b3, g1, g2, g3, c1, c2, c3;
  while(scanf("%d %d %d %d %d %d %d %d %d", &b1, &g1, &c1, &b2, &g2, &c2, &b3, &g3, &c3) != EOF) {
    // BCG, BGC, CBG, CGB, GCB, GBC;
    vi ori;
    ori.push_back(b2+b3+c1+c3+g1+g2);
    ori.push_back(b2+b3+g1+g3+c1+c2);
    ori.push_back(c2+c3+b1+b3+g1+g2);
    ori.push_back(c2+c3+g1+g3+b1+b2);
    ori.push_back(g2+g3+b1+b3+c1+c2);
    ori.push_back(g2+g3+c1+c3+b1+b2);
    int min_x = INT_MAX, min_idx = 0;
    for (int i = 0; i < ori.size(); i++) {
      if (min_x > ori[i]) {
        min_x = ori[i];
        min_idx = i;
      }
    }
    switch(min_idx) {
      case 0: cout << "BCG";
              break;
      case 1: cout << "BGC";
              break;
      case 2: cout << "CBG";
              break;
      case 3: cout << "CGB";
              break;
      case 4: cout << "GBC";
              break;
      case 5: cout << "GCB";
              break;
    }
    cout << " " << min_x << endl;
    ori.clear();
  }
  return 0;
}
