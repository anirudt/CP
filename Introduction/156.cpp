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
#include <iterator>

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
  vs words;
  string str;
  while(cin >> str && str != "#") {
    words.push_back(str);
  }
  map<string, vector<int> > dict;
  map<string, int> traversed;
  for (int i=0; i<words.size(); i++) {
    vi tmp; string s = words[i];
    for (int k=0; k<26; k++)
      tmp.push_back(0);
    for (int j=0; j<s.size(); j++) {
      if (isupper(s[j]))
        tmp[s[j]-65]++;
      else
        tmp[s[j]-97]++;
    }
    dict[s] = tmp;
    traversed[s] = 0;
  }
  map<string, vector<int> >::iterator a, b;
  bool flag = true;
  int l = 0;
  for (a = dict.begin(); a != dict.end(); a++) {
    flag = true;
    for (b = next(a); b != dict.end(); b++) {
      if (a->second == b->second) {
        flag = false;
        traversed[a->first] = 1;
        traversed[b->first] = 1;
        break;
      }
    }
    if (flag == true && traversed[a->first] == 0) cout << a->first << endl;
  }

  return 0;
}
