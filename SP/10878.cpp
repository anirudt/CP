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

typedef map<int, int> mii;

// Glob Var Defs
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  string str;
  int val, pow, i;
  while(getline(cin,str))
  {
    if(str[0]=='_')
    {
      continue;

    }
    if(str[0]=='|')
    {
      val=0, pow =128, i = 1;
      while(str[i]!='|')
      {
        if(str[i]=='o' || str[i]=='O' )
        {
          val += pow;

        }
        i++;
        if(str[i]==' ' || str[i]=='o' || str[i]=='O' )
          pow/=2;

      }

    }
    cout<< char(val);

  }
  return 0;

}
