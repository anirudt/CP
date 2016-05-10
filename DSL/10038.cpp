#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

typedef vector<int> vi;

int main() {
  int n;
  while(scanf("%d", &n) != EOF) {
    vi arr, freq;
    int flag = 0;
    for(int i=0; i<n; i++) {
      int p;int ret = scanf(" %d", &p);
      if (ret!=EOF) 
        arr.push_back(p);
    }
    for (int i=0; i<n; i++)
      freq.push_back(0);
    for (int i=1; i<n; i++)
      freq[abs(arr[i]-arr[i-1])]++;
    for (int i=1; i<n; i++) {
      if (freq[i]==0) {
        cout << "Not jolly" << endl;
        flag = 1;
        break;
      }
    }
    if(flag==0)
      cout << "Jolly" << endl;
    arr.clear(); freq.clear();
  }
  return 0;
}
