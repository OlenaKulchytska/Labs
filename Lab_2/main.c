#include <stdio.h>
# include <math.h>

int main()
{
    int n=0;
    float s=0 , a=1 ;
    do
    {
        a = (pow((n+1),2)) / (pow(2,(2*n+1)));
        n++;
        printf("a = %f\n",a);
        s = s+a;
    }
    while (a >= 0.0001);
    printf("S = %f\n",s);

    return 0;
}