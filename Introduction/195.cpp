#include <cstdio>
#include <cctype>
#include <queue>
#include <sstream>
#include <cmath>
#include <climits>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <stack>

using namespace std;

typedef long long ll;

typedef vector<int> vi;
typedef vector<float> vf;
typedef vector<string> vs;
typedef vector<vi> vi2d;
typedef vector<ll> vll;

typedef map<int, int> mii;

// Glob Var Defs

bool compare(char a, char b) {
  bool lower_a = false, lower_b = false;
  if (islower(a)) lower_a = true;
  if (islower(b)) lower_b = true;

  if (lower_a && lower_b) {
    /* Lowercase both */
    return (a<b);
  }

  else if (!lower_a && !lower_b) {
    /* Uppercase both */
    return (a<b);
  }

  if (lower_a) {
    a -= ('a'-'A');
    return (a<b);
  }
  else {
    b-= ('b'-'B');
    return (a<=b);
  }

}

int main() {
  int n; cin >> n;
  cin.ignore();
  while(n--) {
    string str; cin >> str;
    bool flag = true;
    sort(str.begin(), str.end(), compare);
    do {
      cout << str << endl;
    }while(next_permutation(str.begin(), str.end(), compare));
  }
  return 0;
}
