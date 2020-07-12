#include<stdio.h>
#include<string.h>
 
int main(void){
  char a[100000];
  scanf("%s", a);
  int i;
  int len = strlen(a);
  char b[len];
  char c[len];
  //for(i=0; i<len; i++){
    //printf("%c", a[i]);
  //}
  if(len == 1){
    printf("0");
    return 0;
  }
  for(i=0; i<len; i++){
    if(i%2 == 0){
      b[i] = '1';
      c[i] = '0';
    }else{
      b[i] = '0';
      c[i] = '1';
    }
  }
  int bcount = 0;
  int ccount = 0;
  for(i=0; i<len; i++){
    if(a[i]!=b[i]){
      bcount++;
    }
    if(a[i]!=c[i]){
      ccount++;
    }
  }
  if(bcount>ccount){
    printf("%d", ccount);
  }else{
    printf("%d", bcount);
  }
  return 0;
}