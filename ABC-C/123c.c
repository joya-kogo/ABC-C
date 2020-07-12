#include<stdio.h>

int main(void){
  long long int n;
  long long int a;
  long long int b;
  long long int c;
  long long int d;
  long long int e;
  scanf("%lld", &n);
  scanf("%lld", &a);
  scanf("%lld", &b);
  scanf("%lld", &c);
  scanf("%lld", &d);
  scanf("%lld", &e);
  long long int min = a;
  if(b<min){
    min = b;
  }
  if(c<min){
    min = c;
  }
  if(d<min){
    min = d;
  }
  if(e<min){
    min = e;
  }
  long long int ans = 0;
  if(n%min==0){
    ans = n/min + 4;
  }
  if(n%min!=0){
    ans = n/min + 1 + 4;
  }
  printf("%lld", ans);
}