#include <cstdio>
#include <cctype>
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
typedef pair<string, int> si;
// Glob Var Defs

bool comparator(const si& l, const si& r) {
  if (l.second > r.second) return true;
  else return false;
}

int main() {
  string s, s_old;
  vector< pair<string, int> > list;
  while(getline(cin, s) && s!="0") {
    bool flag = true;
    map<string, map<string, int> > dict;
    string s1;

    while (cin >> s1, flag) {
      if (isupper(s[0])) {
        flag = false;
        break;
      }
      dict[s1] = 1;
    }
    if (!flag) {
      s_old = s1;
    }
    int val = 0;
    for (map<string, int>::iterator it = dict.begin(); it != dict.end(); it++)
      val += it->second;
    pair<string, int> p;
    p.first = s;
    p.second = val;
    list.push_back(p);
    dict.clear();
    cout << "Hello " << endl;
  }
  sort(list.begin(), list.end(), comparator);
  for (int i=0; i<list.size(); i++)
    cout << list[i].first << " " << list[i].second << endl;

  return 0;
}
