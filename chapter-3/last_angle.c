/*@
   ensures \result == 180-first-second && first+second+\result == 180;
   assigns \nothing;
*/


int last_angle(int first,int second){
  return 180 - first - second;
}
