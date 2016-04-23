#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>

#define NUM_MAX 4294967295

using namespace std;

typedef vector<int> vi;
typedef vector<float> vf;
typedef vector<string> vs;

typedef map<int, int> mii;

/* Digit getter */

/* Palindrome checker */

int main() {
  int N; cin >> N;
  while(N--) {
    int num, k; cin >> num;
    int iter = 0;
    while (num < NUM_MAX && iter <= 100) {
      vi dig; k = num;
      while(k>0) {
        dig.push_back(k%10);
        k = k/10;
      }
      int new_num = 0, len = dig.size();
      vi new_dig;
      for(int i=0; i<len; i++) {
        // Update sum.
        new_dig.push_back(dig[i]+dig[len-1-i]);
        new_num += new_dig[i]*pow(10, i);
      }
      int new_len = new_dig.size();
      int flag = 0;
      for (int j=0; j<new_len; j++) {
        cout << new_dig[j] << " " << new_dig[new_len-1-j];
        if (new_dig[j] != new_dig[new_len-1-j]) {
          flag = 1;
          break;
        }
        else
          continue;
      }
      if (flag == 1) {
        num = new_num;
        iter++;
      }
      else {
        cout << iter << " " << new_num << endl;
        break;
      }
    }
  }
  return 0;
}
