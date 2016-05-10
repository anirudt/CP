#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

typedef vector<int> vi;
typedef vector<float> vf;
typedef vector<string> vs;

typedef map<int, int> mii;

int main() {
  int a;
  vi arr;
  while(scanf("%d", &a) != EOF) {
    arr.push_back(a);
    sort(arr.begin(), arr.end());
    int k = arr.size();
    if (k%2)
      cout << arr[k/2] << endl;
    else
      cout << (arr[(k-1)/2] + arr[k/2])/2<< endl;
  }
  return 0;
}
