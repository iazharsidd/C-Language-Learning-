#include<stdio.h>
int main(int argc, char const *argv[])
{
    int days = 1329;
    int years,week,day;
   years= days/365;
   week = (days%365)/7;
  day = days-((years*365)+week*7);
  printf("Years = %d\n",years);
  printf("week = %d\n",week);
  printf("day = %d",day);
    
    return 0;
}
