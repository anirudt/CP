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
    int a, b, sum;
    cin >> a; cin >> b;
    a = a%2==0?a+1:a;
    b = b%2==0?b-1:b;
    sum = (b-a+2)*(a+b)/4;
    cout << "Case " << i << ": " << sum << endl;
    i++;
  }
  return 0;
}
