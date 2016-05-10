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
typedef pair<int, int> ii;

typedef map<int, int> mii;

// Glob Var Defs

int main() {
  int t, iter = 1;
  while(cin >> t, t) {
    cout << "Scenario #" << iter << endl;
    mii dict, updated;
    for (int i=0; i<t; i++) {
      updated[i] = -1;
      int n; cin >> n;
      for (int j=0; j<n; j++) {
        int p; cin >> p;
        dict[p] = i+1;
      }
    }
    // Command enlisting
    string str;
    vector<ii> q;
    while(getline(cin, str) && str != "STOP") {
      istringstream iss(str);
      if (str.find("ENQUEUE") != string::npos) {
        string s; int key;
        iss >> s; iss >> key;
        ii tmp; tmp.first = dict[key];
        tmp.second = key;
        
        if (q.size()==0) {
          q.push_back(tmp);
          updated[tmp.first] = 0;
        }
        else {
          bool found = false; int idx = 0;
          //cout << "Last idx " << q.size()-1 << endl;
          if (updated[tmp.first] != -1 && tmp.first != q[q.size()-1].first) {
            /* Cached, and present */
            idx = updated[tmp.first]+1;
            updated[tmp.first] += 1;
            q.insert(q.begin()+idx, tmp);
          }
          else {
            //cout << "Hello " << endl;
            q.push_back(tmp);
            updated[tmp.first] = q.size()-1;
          }
        }
      //cout << tmp.first << " updated " << updated[tmp.first] << endl;

      }
      else if (str.find("DEQUEUE") != string::npos) {
        int key = q[0].second;
        q.erase(remove(q.begin(), q.end(), q[0]), q.end());
        //cout << "Pop" << endl;
        cout << key << endl;
      }
      //for (int i=0; i<q.size(); i++)
        //cout << q[i].second << endl;
    }
    cout << endl;
    iter++;
  }
  return 0;
}
