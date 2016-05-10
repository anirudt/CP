#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;

typedef vector<int> vi;

int main() {
  string str;
  bool word = false;
  while(getline(cin, str)) {
    int count = 0;
    for (int i=0; i<str.size(); i++) {
      if (i==0 && isalpha(str[i])) {
        word = true;
        count++;
      }
      else if (isalpha(str[i]) && !isalpha(str[i-1]) && word == false) {
        word = true;
        count++;
      }
      else {
        word = false;
      }
    }
    cout << count << endl;
  }
  return 0;
}
