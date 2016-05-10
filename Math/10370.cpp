#include <cstdio>
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

typedef map<int, int> mii;

int main() {
  ll C; cin >> C;
  while(C--) {
    int N; cin >> N;
    vi arr;
    float sum = 0;
    for(int i=0; i<N; i++) {
      int p; cin >> p;
      sum += p;
      arr.push_back(p);
    }
    sum /= 1.0*N;
    int c = 0;
    for(int i=0; i<N; i++) {
      if (arr[i] > sum)
        c++;
    }
    float num = 100.0*c/N;
    printf("%.3f%\n", num);
  }
  return 0;
}
