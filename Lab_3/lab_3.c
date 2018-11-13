#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    double Y;
    double element;
    double SN=0;
    double SE=0;


    for(double x=0.1;x<=1;x+=0.09)
    {
        SN=0;
        SE=0;
        Y=((1+pow(x,2))/2)*(atan(x))-(x/2);
        for(int n = 1;n<31;n++)
        {
            element=pow(-1,(n+1))*((pow(x,(2*n+1)))/(4*pow(n,2)-1));
            SN+=element;
        }

        int n=1;
        element=0;

        do
        {
            element=pow(-1,(n+1))*((pow(x,(2*n+1)))/(4*pow(n,2)-1));
            SE+=element;
            n++;
        }
        while(element>0.0001);

        printf("X: %lf",x);
        printf("    Y: %lf",Y);
        printf("    SN: %lf",SN);
        printf("    SE: %lf\n",SE);
    }
    return 0;
}
