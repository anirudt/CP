#include <cstdio>
#include <functional>
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

int main() {
  map<char, int> dict;
  dict['A'] = 2; dict['B'] = 2; dict['C'] = 2;
  dict['D'] = 3; dict['E'] = 3; dict['F'] = 3;
  dict['G'] = 4; dict['H'] = 4; dict['I'] = 4;
  dict['J'] = 5; dict['K'] = 5; dict['L'] = 5;
  dict['M'] = 6; dict['N'] = 6; dict['O'] = 6;
  dict['P'] = 7; dict['Q'] = 7; dict['R'] = 7;
  dict['S'] = 7; dict['T'] = 8; dict['U'] = 8;
  dict['V'] = 8; dict['W'] = 9; dict['X'] = 9;
  dict['Y'] = 9; dict['Z'] = 9;
  string str;
  while(getline(cin, str)) {
    for (int i=0; i<str.size(); i++) {
      if (isalpha(str[i])) printf("%d", dict[str[i]]);
      else printf("%c", str[i]);
    }
    printf("\n");
  }
  return 0;
}
