#include <stdio.h>
int main() {
  int a,b;
  scanf("%d %d",&a,&b);
  int c=0;
  while(a<=b){
      a=a*3;
      b=b*2;
      c+=1;
  }
  printf("%d",c);
    
}