
#include <stdio.h>
# include <math.h>

int main()
{
    int n=1;
    float s=0 , a , el=1;
    do
    {
        a = (pow((n+1),2)) / (pow(2,(2*n+1)));
        el=a*el;
        n++;
        printf("Answer = %f\n",el);
        s = s+el;
    }
    while (el >= 0.0001);
    printf("S = %f\n",s);

    return 0;
}

