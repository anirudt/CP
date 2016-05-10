#include <cstdio>
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

typedef long long ll;

typedef vector<int> vi;
typedef vector<float> vf;
typedef vector<string> vs;
typedef vector<vi> vi2d;

typedef map<int, int> mii;

int main() {
  int n, m;
  int iter = 1;
  // Very important learning! this one.
  while (scanf("%d %d\n", &n, &m) != EOF && m>0 && n>0) {
    vector<string> mine;
    if (iter>=2)
      cout << endl;
    for (int i=0; i<n; i++) {
      string s; getline(cin, s);
      mine.push_back(s);
      }
    vi2d data, score;
    for(int i=0; i<n; i++) {
      string str = mine[i]; vi line, sc;
      for(int j=0; j<m; j++) {
        int p;
        if (str[j]=='*')
          p = 1;
        else
          p = 0;
        line.push_back(p);
        sc.push_back(0);
      }
      data.push_back(line);
      score.push_back(sc);
    }
    //cout << data[0].size() << endl;
    for(int i=0; i<n; i++) {
      for(int j=0; j<m; j++) {
        //cout << score[i][j];
        if (mine[i][j]=='*')
          score[i][j] = -1;
        // Implement algo to sum up oct around, 
        // and taking care of BCs.
        else {
          int di = i>0 ? i-1: 0; 
          for(; di<=i+1 && di>=0 && di<n; di++) {
            int dj = j>0 ? j-1: 0;
            for (; dj<=j+1 && dj>=0 && dj<m; dj++) {
              if (di==i && dj==j)
                continue;
              else
                score[i][j] += data[di][dj];
            }
          }
        }
      }
    }
    cout << "Field #" << iter << ":" << endl;
    for (int i=0; i<n; i++) {
      for (int j=0; j<m; j++) {
        if (mine[i][j]=='*')
          cout << '*';
        else
          cout << score[i][j];   
      }
      cout << endl;
    }
    iter++;

  }
  return 0;
}
