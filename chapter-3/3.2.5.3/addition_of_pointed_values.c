#include <limits.h>

/*@
   requires \valid(p) && \valid(q) ;
   requires ( INT_MIN/2 <= *p <=INT_MAX/2 ) &&
            (INT_MIN/2 <= *q <= INT_MAX/2);
   assigns \nothing;
   ensures \result == *p + *q;
*/

int add(int *p,int *q){
  return *p + *q;
}

int main(){
  int a=24;
  int b=42;

  int x;

  x=add(&a,&b);
  //@assert x == a+b;
  //@assert x == 66;

  x=add(&a,&a);
  //@assert x == a+a;
  //@assert x == 48;
}
