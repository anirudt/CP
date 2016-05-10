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

// Glob Var Defs
// TODO: Apply str -> int for long inputs

int main() {
  ll N;
  while(scanf("%d", &N) != EOF) {
    int flag = 0;
    bool leap = false;
    if (N%4==0 && N%100!=0) {
      // Leap Year
      printf("This is leap year.\n");
      leap = true;
    }
    else if (N%4==0 && N%400==0) {
      printf("This is leap year.\n");
      leap = true;
    }
    else flag++;
    if (N%15==0)
      printf("This is huluculu festival year.\n");
    else flag++;
    if (N%55==0 && leap==true)
      printf("This is bulukulu festival year.\n");
    else flag++;
    if (flag==3) printf("This is an ordinary year.\n");
    printf("\n");
  }
  return 0;
}
