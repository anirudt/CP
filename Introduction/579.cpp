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
  int a, b;
  while(scanf("%d:%d", &a, &b) != EOF && (a>0 || b>0)) {
    float h = 360.0*(a)/12 +(b)*0.5;
    float m = 360.0*b/60;
    float ans = 0;
    if (h>m)
      ans = h-m;
    else if(h<m)
      ans = m-h;
    else
      ans = 0;
    if (ans > 180)
      ans = 360 - ans;
    printf("%.3f\n", ans);
  }
  return 0;
}
