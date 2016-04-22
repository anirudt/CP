#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

typedef vector<int> vi;
typedef vector<float> vf;
typedef vector<string> vs;

typedef map<int, int> mii;

int main() {
  int S, B;
  while(scanf("%d %d", &S, &B) != EOF && (S!=0 && B!=0)) {
    vi alive;
    /* Can use direct address */
    for(int i=0; i<S+1; i++)
      alive.push_back(1);
    for(int i=0; i<B; i++) {
      int L, R, flag1 = 0, flag2 = 0;
      int left_bud, right_bud;
      scanf("%d %d", &L, &R);
      for(int j=L; j<=R; j++)
        alive[j] = -1;
      for(int k = L-1; k >= 1; k--) {
        if (alive[k] != -1) {
          left_bud = k;
          flag1 = 1;
          break;
        }
      }
      for(int m = R+1; m <= S; m++) {
        if (alive[m] != -1) {
          right_bud = m;
          flag2 = 1;
          break;
        }
      }
      if (flag1 == 0)
        cout << "* ";
      else
        cout << left_bud << " ";
      if (flag2 == 0)
        cout << "*" << endl;
      else
        cout << right_bud << endl;
    }
    cout << "-" << endl;
  }
  return 0;
}
