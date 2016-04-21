#include <cstdio>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

typedef vector<int> vi;

int main() {
  int N; cin >> N;
  while(N--) {
    int l; cin >> l;
    vi arr;
    for (int i=0; i<l; i++) {
      int p; cin>>p;
      arr.push_back(p);
    }
    int c = 0;
    for (int i = 0; i < l-1; i++) {
      for (int j = i+1; j < l; j++) {
        if (arr[i] > arr[j]) {
          swap(arr[i], arr[j]);
          c++;
        }
      }
    }
    cout << "Optimal train swapping takes " << c <<" swaps." << endl;
  }
  return 0;
}
