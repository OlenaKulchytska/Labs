#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n, k1,k2;
    printf("Enter n: \n");
    scanf("%d",&n);
    int mas[n],mas1[n-2];
    for(int i=0; i<n; i++)
    {
        mas[i]= rand()%100;
        printf("  %d  ",mas[i]);
    }
    printf("\nEnter k1:\n");
    scanf("%d",&k1);
    if(k1>=n)
    {
        printf("error\n");
    }
    else
    {
        for(int j=k1; j>(k1-2); j--)
        {
            printf("  %d  ",mas[j]);
        }
    }
    printf("\nNew mas: \n");
    int y=0;
    for(int i=1;i<(n-1);i++)
    {
        mas1[y]=mas[i];
        y++;
    }
    printf("Put k2: ");
    scanf("%d",&k2);
    if(k2<n-2)
    {
    for(int j=k2; j<(k2+2); j++)
    {
        printf("  %d  ",mas1[j]);
    }
    }else
    {
    printf("error\n");
    }
    
    
    return 0;
}

