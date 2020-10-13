/*@requires 1 <= month <= 12;
   ensures (month == 2  ==> \result == 28);
   ensures (month%2!=0  ==> \result == 31);
   ensures ((month%2==0&&month!=2) ==> \result == 30);
   assigns \nothing;
*/


int day_of(int month){
  int days[]={31,28,31,30,31,30,31,30,31,30,31,30};
  return days[month-1];
}
