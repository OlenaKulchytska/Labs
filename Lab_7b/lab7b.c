#include <stdio.h>
#include <math.h>
#include <stdarg.h>

void OctalToDecimal(int n,...)
{
long int decimal=0;
int M[n];
va_list list;
va_start(list,n);
for (int j = 0; j < n; ++j) {
M[j] = va_arg(list, int);
}
int j=0;
for (int i = 0; i < n;i++) {
while (M[i] != 0)
{
decimal = decimal +(M[i] % 10)* pow(8, j++);
M[i] = M[i] / 10;
}
printf("\nEquivalent decimal value: %ld",decimal);
j=0;
}

}
int main()
{
OctalToDecimal(3,22,55,77);
OctalToDecimal(6,120,30,23,109,77,86);
OctalToDecimal(7,99,19,22,299,33,12,85);


return 0;
}
