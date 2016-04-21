#include <cstdio>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

typedef vector<int> vi;
typedef vector<float> vf;

int main() {
  int time, rec;
  float princ, dp;
  while(scanf("%d %f %f %d", &time, &dp, &princ, &rec) != EOF) {
    vf rates;
    for(int i=0; i<time; i++) {
      rates.push_back(0);
    }
    int j = 0;
    while(rec--) {
      int i; float r;
      scanf("%d %f", &i, &r);
      for(j = i; j<=time; j++) {
        rates[j] = r;
      }
    }
    float amt = dp+princ;
    int month = 1;
    cout << "haha " << rates[0] << endl;
    float val = amt*(1-rates[0]);
    float owe = princ;
    while(val <= owe) {
      cout << "val " << val << " owe " << owe << endl;
      val = val*(1-rates[month]);
      owe = owe - dp*month;
      month++;
    }
    if (month > 1)
      cout << month << " months" << endl;
    else
      cout << "1 month" << endl;
  }
  return 0;
}
