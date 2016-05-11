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

bool isMirrored(string s, map<char, char> dict) {
  int k = s.size();
  for (int i=0; i<=s.size()/2; i++) {
    if (dict[s[i]] != s[k-1-i])
      return false;
  }
  return true;
}

bool isPal(string s, map<char, char> dict) {
  int k = s.size();
  for (int i=0; i<=s.size()/2; i++) {
    if (s[i] != s[k-1-i])
      return false;
  }
  return true;
}

int main() {
map<char, char> dict;
dict['A'] = 'A'; dict['I'] = 'I';
dict['J'] = 'L'; dict['L'] = 'J';
dict['E'] = '3'; dict['3'] = 'E';
dict['M'] = 'M'; dict['O'] = 'O';
dict['H'] = 'H'; dict['T'] = 'T';
dict['U'] = 'U'; dict['V'] = 'V';
dict['W'] = 'W'; dict['X'] = 'X';
dict['Y'] = 'Y'; dict['Z'] = '5';
dict['5'] = 'Z'; dict['1'] = '1';
dict['2'] = 'S'; dict['8'] = '8';
dict['S'] = '2';

  string str;
  while(getline(cin, str)) {
    bool a = isMirrored(str, dict);
    bool b = isPal(str, dict);
    if (!a && !b)
      cout << str << " -- is not a palindrome." << endl;
    else if (!a && b)
      cout << str << " -- is a regular palindrome." << endl;
    else if (a && !b)
      cout << str << " -- is a mirrored string." << endl;
    else
      cout << str << " -- is a mirrored palindrome." << endl;
    cout << endl;

  }
  return 0;
}
