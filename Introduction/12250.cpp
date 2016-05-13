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
  map<string, string> dict;
  dict["HELLO"] = "ENGLISH";
  dict["HOLA"] = "SPANISH";
  dict["HALLO"] = "GERMAN";
  dict["BONJOUR"] = "FRENCH";
  dict["CIAO"] = "ITALIAN";
  dict["ZDRAVSTVUJTE"] = "RUSSIAN";
  string str; int iter = 1;
  while(getline(cin, str) && str != "#") {
    if (dict.find(str) == dict.end())
      cout << "Case "<< iter << ": " << "UNKNOWN" << endl;
    else
      cout << "Case " << iter << ": " << dict[str] << endl;
    iter++;
  }

  return 0;
}
