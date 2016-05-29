#include <cstdio>
#include <set>
#include <functional>
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
typedef vector<double> vd;

typedef map<int, int> mii;

// Glob Var Defs
int main(){
  int n;
  double amount;
  while(scanf("%d",&n) && n!=0){
    vector<double> money;
    double amount,total=0,respPos=0,respNeg=0;
    for (int i = 0; i < n; ++i)
    {
      scanf("%lf",&amount);
      total += amount;
      money.push_back(amount);

    }
    total /= n;
    for (int i = 0; i < n; ++i)
    {
      double dif =(double) (long) ((money[i]-total) * 100.0) / 100.0;
      if(dif>0)
        respPos+=dif;
      else
        respNeg+=dif;

    }
    double resp = (-respNeg > respPos) ? -respNeg : respPos;
    resp = (resp<0)?-resp:resp;
    printf("$%.2lf\n",resp);

  }

  return 0;  

}
