#include <stdio.h>
#include <math.h>
#include <stdarg.h>
  
void OctalToDecimal(int n,...)
{
  int M[n];
  va_list list;
  va_start(list,n);
  for (int j = 0; j < n; ++j) {
     M[j] = va_arg(list, int);
  }
  for(int j=0; j<n; j++){
    printf("\nEquivalent decimal value: %d",M[j]);
  }
}

 int main()
{
OctalToDecimal(3,022,055,077);
OctalToDecimal(6,0120,030,023,0107,077,06);
OctalToDecimal(7,03,016,022,021,033,012,075);
return 0;
}

