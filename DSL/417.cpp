#include <cstdio>
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
typedef map<string, int> msi;
// Glob Var Defs

int main() {
  msi list;
  // One letter
  int c = 1;
  for (int i=0; i<26; i++) {
    string s = ""; s += i+97;
    ////cout << s << endl;
    list[s] = c;
    c++;
  }
  for (int i=0; i<26; i++) {
    string s = ""; s += 97+i;
    for (int j=i+1; j<26; j++) {
      string a = s; a += 97+j;
      //cout << a << endl;
      list[a] = c;
      c++;
    }
  }

  for (int i=0; i<26; i++) {
    for (int j=i+1; j<26; j++) {
      string s = ""; s += 97+i;
      s += 97+j;
      for (int k=j+1; k<26; k++) {
        string a = s;
        a += k+97;
        //cout << a << endl;
        list[a] = c;
        c++;
      }
    }
  }
  for (int i=0; i<26; i++) {
    for (int j=i+1; j<26; j++) {
      for (int k=j+1; k<26; k++) {
        string s = ""; s += 97+i;
        s += 97+j; s += 97 + k;
        for (int l = k+1; l<26; l++) {
          string a = s; a += 97+l;
          //cout << a << endl;
          list[a] = c;
          c++;
        }
      }
    }
  }
  for (int i=0; i<26; i++) {
    for (int j=i+1; j<26; j++) {
      for (int k=j+1; k<26; k++) {
        for (int l=k+1; l<26; l++) {
          string s = ""; s += 97+i;
          s += 97+j; s += 97 + k; s+=97+l;
          for (int m = l+1; m<26; m++) {
            string a = s; a += 97+m;
            //cout << a << endl;
            list[a] = c;
            c++;
          }
        }
      }
    }
  }
  string str;
  while(getline(cin, str)) {
    cout << list[str] << endl;
  }
  return 0;
}
