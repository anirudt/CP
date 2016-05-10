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
typedef vector<pair<int, int>> vii;
typedef vector<float> vf;
typedef vector<string> vs;
typedef vector<vi> vi2d;
typedef vector<ll> vll;
typedef pair<int, int> mypair;

typedef map<int, int> mii;

// Glob Var Defs
// Descending order index-preserving sort
bool comparator(const mypair& l, const mypair& r) {
  if (l.first > r.first) return true;
  else {
    if (l.first == r.first)
      return l.second < r.second;
    else
      return false;
    }
  }

  int main() {
    int n; cin >> n;
    cin.ignore();
    vii freq;
    mypair p;
    for (int i=0; i<26; i++) {
      p.first = 0; p.second = i;
      freq.push_back(p);
    }
    while(n--) {
      string str; getline(cin, str);
      for (int i=0; i<str.size(); i++) {
        if (str[i]>=65 && str[i] <=90) // Upper case alphabet
          freq[str[i]-65].first++;
        else if (str[i]>=97 && str[i]<=122) //Lower case alphabet
          freq[str[i]-97].first++;
      }
    }
    /* Get line for descending sorting */
    //cout << "Going to sort" << endl;
    sort(freq.begin(), freq.end(), comparator);
    for (int i=0; i<26; i++) {
      //cout << "Hello" << endl;
      if (freq[i].first != 0)
        printf("%c %d\n", freq[i].second+65, freq[i].first);
    }
    return 0;
  }
