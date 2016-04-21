
#include<cstdio>
 
using namespace std;
 
int duration, months, a;
float down, amount, b;
float depr[110];
 
void simul(int month, float car, float loan, float payment) {
  loan -= payment;
  car -= depr[month] * car;

  if(loan < car) {
    printf(month == 1? "1 month\n" : "%d months\n", month);
    return;

  }
  simul(month + 1, car, loan, payment);

}

int main() {
  for(;;) {
    scanf("%d %f %f %d", &duration, &down, &amount, &months);
    if(duration < 0) break;
    for(int i = 0; i < 110; i++)
      depr[i] = -1;
    for(int i = 0; i < months; i++) {
      scanf("%d %f", &a, &b);
      depr[a] = b;

    }
    for(int i = 0; i < 110; i++)
      if(depr[i] < 0) depr[i] = depr[i - 1];

    float car = (amount + down) * (1.0 - depr[0]);
    if(amount < car) printf("0 months\n");
    else simul(1, car, amount, amount / duration);

  }

}
