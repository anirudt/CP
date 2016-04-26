#include <cstdio>
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
typedef map<char, int> mic;

// Glob Var Defs

int main() {
  string str;
  mic mapper;
  for(int i=0; i<256; i++) {
    if (i=='B'||i=='F'||i=='P'||i=='V')
      mapper[i] = 1;
    else if (i=='C'||i=='G'||i=='J'||i=='K'||i=='Q'||i=='S'||i=='X'||i=='Z')
      mapper[i] = 2;
    else if (i=='D'||i=='T')
      mapper[i] = 3;
    else if (i=='L')
      mapper[i] = 4;
    else if (i=='M'||i=='N')
      mapper[i] = 5;
    else if (i=='R')
      mapper[i] = 6;
    else
      mapper[i] = 0;
  }
  while(getline(cin, str)) {
    vi arr;
    for (int i=0; i<str.size(); i++) {
      if (mapper[str[i]] != 0) {
        if (!arr.size())
          arr.push_back(mapper[str[i]]);
        else if (mapper[str[i]] == mapper[str[i-1]])
          continue;
        else
          arr.push_back(mapper[str[i]]);
      }
    }
    for (int i=0; i<arr.size(); i++)
      cout << arr[i];
    cout << endl;
  }
  return 0;
}
