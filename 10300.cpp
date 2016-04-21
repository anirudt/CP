#include <cstdio>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  int n; scanf("%d", &n);
  while(n--) {
    int f; scanf("%d", &f);
    int budget = 0;
    for(int i=0; i<f; i++) {
      int area, anim, env;
      scanf("%d %d %d", &area, &anim, &env);
      budget += area*env;
    }
    cout << budget << endl;
  }
  return 0;
}
