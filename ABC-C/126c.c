#include <stdio.h>
#include <math.h>

int main(void){
  int n;
  scanf("%d", &n);
  int k;
  scanf("%d", &k);
  int key = 0;
  double lg2 = log2(k);
  double area = ceil(lg2);
  int a = area;
  double sum = 0;
  int i = 0;
  int now = 0;
  int count = 0;
  for(i=1; i<n+1; i++){
    now = i;
    while (now<k){
      now = now*2;
      count++;
    }
    sum = sum + (double)1/n * pow(0.5, count);
    count = 0;
  }
  printf("%.15lf", sum);
  return 0;
}