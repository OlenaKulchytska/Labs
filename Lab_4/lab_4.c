#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n, k, num;

    printf("Enter n: \n");
    scanf("%d",&n);
    int mas[n];
    for(int i=0; i<n; i++)
    {
        mas[i]= rand()%100;
        printf("  %d  ",mas[i]);
    }

    printf("\nEnter k:\n");
    scanf("%d",&k);

    num=n-k;
    for(int j=k; j>0; j--)
    {
        printf("  %d  ",mas[j-1]);
    }
    for(int l=n; l-1>num; l--)
    {
        printf("  %d  ",mas[l-1]);
    }

    printf("\nNew mas: \n");

    for(int j=k-1; j>0; j--)
    {
        printf("  %d  ",mas[j-1]);
    }
    for(int l=n; l-1>(num+1); l--)
    {
        printf("  %d  ",mas[l-1]);
    }


    return 0;
}
