#include <cstdio>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

typedef vector<int> vi;

int main() {
  int a, b, i = 0;
  while(scanf("%d %d", &a, &b) ==2) {
    if(a==0 && b==0)
      break;
    vi ad, bd;
    for(i=0; i<10; i++) {
      ad.push_back(0); bd.push_back(0);
    }
    i = 0;
    while(a>0) {
      ad[i] = a%10;
      a /= 10; i++;
    }
    i = 0;
    while(b>0) {
      bd[i] = b%10;
      b /= 10; i++;
    }
    vi carry;
    for(i = 0; i < 10; i++) {
      if (ad[i]+bd[i] >= 10 && i==0) {
        carry.push_back(1);
      }
      else if(i>0 && ad[i]+bd[i]+carry[i-1]>= 10){
        carry.push_back(1);
      }
      else {
        carry.push_back(0);
      }
    }
    int c = 0;
    for(i = 0; i < 10; i++) {
      if(ad[i] +bd[i] >= 10 && i==0) {
        c++;
      }
      else if(ad[i]+bd[i]+carry[i-1] >= 10) {
        c++;
      }
    }
    if (!c)
      cout << "No carry operation." << endl;
    else if(c==1)
      cout << "1 carry operation." << endl;
    else
      cout << c << " carry operations." << endl;
    ad.clear(); bd.clear();
  }
  return 0;
}
