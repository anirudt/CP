#include<cstdio>
#include<cstring>
#include<algorithm>
 
using namespace std;
 
int main(){
  char a[51];
  while(gets(a)){
    if(a[0]=='#') break;
    else{
      if(next_permutation(a, a+strlen(a))) puts(a);
      else puts("No Successor");

    }

  }
  return 0;

}
