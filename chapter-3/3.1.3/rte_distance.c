#include <limits.h>

/*@requires (INT_MIN/2 <= a <= INT_MAX/2) &&
            (INT_MIN/2 <= b <= INT_MAX/2);

assigns \nothing;
   ensures (a<b  ==> \result == b-a) &&
            (a>=b  ==> \result == a-b);

*/

int distance(int a,int b){
  if(a<b)return b-a;
  else return a-b;
}
