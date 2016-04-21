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
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int ans = a>b?(b>c?b:(a>c?c:a)):(a>c?a:(b>c?c:b));
    cout << "Case " << i << ": " << ans << endl;
    i++;
  }
  return 0;
}
