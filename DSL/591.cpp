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

typedef map<int, int> mii;

int main() {
  int n, iter = 1;
  while(cin >> n && n!=0) {
    vi arr;
    int sum = 0;
    for (int i=0; i<n; i++) {
      int p; cin >> p;
      sum += p;
      arr.push_back(p);
    }
    sum /= n;
    int c = 0;
    for (int i=0; i<n; i++) {
      if (arr[i]>sum)
        c += arr[i]-sum;
    }
    cout << "Set #" << iter << endl;
    cout << "The minimum number of moves is " << c << "." << endl;
    cout << endl;
    iter++;
  }
  return 0;
}
