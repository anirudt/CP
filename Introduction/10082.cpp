#include <cstdio>
#include <set>
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
  map<char, char> dict;
  dict['1'] = '`';
  dict['2'] = '1'; dict['3'] = '2';
  dict['4'] = '3'; dict['5'] = '4';
  dict['6'] = '5'; dict['7'] = '6';
  dict['8'] = '7'; dict['9'] = '8';
  dict['0'] = '9'; dict['-'] = '0';
  dict['='] = '-';
  return 0;
}
