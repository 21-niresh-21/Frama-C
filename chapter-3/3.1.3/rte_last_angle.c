/*@requires (0<first<180 && 0<second<180);
   ensures \result == 180-first-second && first+second+\result == 180;
   assigns \nothing;
*/


int last_angle(int first,int second){
  return 180 - first - second;
}
