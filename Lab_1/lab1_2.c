#include <math.h>
#include <stdio.h>
int main()
{  
    int m, n, c, k, a;
    
    printf("Enter m\n");
    scanf("%f",&m);
    
    printf("Enter n\n");
    scanf("%f",&n);
     
    c = n++-m;
    printf("The answer is %d\n",c);
    
    k = m-->n;
    printf("The answer is %d\n",k);
    
    a = n-->m;
    printf("The answer is %d\n",a);

    return 0;
}
