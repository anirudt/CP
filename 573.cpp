#include <cstdio>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

typedef vector<int> vi;

int main() {
  int H, U, D;
  float F;
  while(scanf("%d %d %d %f", &H, &U, &D, &F) != EOF && H != 0) {
    int day = 0;
    float height = 1;
    int flag = 0;
    float fatigue = F*U/100;
    float daytime = U;
    while(height >= 0) {
      if (day==0) height = U;
      else height += daytime;

      daytime = daytime - fatigue < 0 ? 0 : daytime - fatigue;
      if (height > H) {
        flag = 1;
        day++;
        break;
      }
      else {
        height -= D;
      }
      day++;
    }
    if (flag == 1)
      cout << "success ";
    else
      cout << "failure ";
    cout << "on day " << day << endl;
  }
  return 0;
}
