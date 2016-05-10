#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int t, a, b;
  scanf("%d", &t);
  while(t--) {
    int a, b;
    scanf("%d %d", &a, &b);
    if (a<b)
      cout << "<" << endl;
    else if(a>b)
      cout << ">" << endl;
    else
      cout << "=" << endl;
  }
}
