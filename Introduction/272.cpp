#include <cstdio>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

int main() {
  string str;
  string apost = "''";
  string backtick = "``";
  bool count = true;
  while(getline(cin, str)) {
    for(int k=0; k<str.size(); k++) {
      if (str[k]=='"') {
	if (count) {
	  str.erase(k, 1);
	  str.insert(k, backtick);
	  count = false;
	}
	else {
	  str.erase(k, 1);
	  str.insert(k, apost);
	  count = true;
	}
      }
    }
    cout << str << endl;
  }
  return 0;
}
