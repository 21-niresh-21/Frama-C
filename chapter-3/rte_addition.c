#include <limits.h>


/*@
   requires INT_MIN/2<= x < INT_MAX/2 ;
   requires  INT_MIN/2<= y <= INT_MAX/2;    
   ensures \result == x+y;
   assigns \nothing;
*/


int add(int x,int y){
	return x+y;
	  }
