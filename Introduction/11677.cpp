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

int main()
{
  int h1,h2,m1,m2,h,m;
  while(scanf("%d%d%d%d",&h1,&m1,&h2,&m2)==4)
  {
    if(h1==0 && m1==0 && h2==0 && m2==0) break;
    else 
    {
      h=h2-h1;
      m=m2-m1;
      if(m<0)
      {
        m=m+60;
        h=h-1;

      }
      if(h<0)
        h=h+24;

    }
    printf("%d\n",h*60+m); 

  }
  return 0;

}
