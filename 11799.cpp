#include <cstdio>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

typedef vector<int> vi;

int main() {
  int T; cin >> T;
  int i = 1;
  while(i<=T) {
    int max = 0;
    int N; cin >> N;
    for(int j = 0; j < N; j++) {
      int p; cin >> p;
      if(p > max)
        max = p;
    }
    cout << "Case " << i << ": " << max << endl;
    i++;
  }
  return 0;
}
