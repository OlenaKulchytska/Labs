#include <math.h>
#include <stdio.h>
int main()
{
   float a, b, c;
   
   printf("Enter a\n");
   scanf("%f",&a);
   
   printf("Enter b\n");
   scanf("%f",&b);
   
   c = ((pow((a+b),3) - pow((a),3)) / (3*a*pow((b),2) + pow((b),3) + 3*pow((a),2)*b));
   
   printf("The answer is %f\n",c);
   
   return 0;
}
