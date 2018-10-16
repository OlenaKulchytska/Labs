#include <stdio.h>




int main() {
    int result=0;
    int i,j;
    int rows,columns;
    int number = 0;

    printf("Enter an amount of rows: ");
    scanf("%d",&rows);
    printf("Enter an amount of columns: ");
    scanf("%d",&columns);
    int matrix[rows][columns];
    int s[columns];

    for (int i = 0; i <rows ;i++) {
        for (int j = 0; j <columns ; j++) {
            printf("Enter an element [%d][%d]: ",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }

    for (int i = 0; i <rows ;i++) {
        printf("|");
        for (int j = 0; j <columns ; j++) {
            printf(" %d |", matrix[i][j]);
        }

        printf("\n");
    }

    for(int j = 0; j<columns; j++)
    {
        s[j] = 0;
    }
    for (int i = 0; i <columns-1 ; i++) {
        for ( j = 0; j < rows-1;j++) {
            s[i] += matrix[j][i];
        }
        rows -=1;
        printf(" %d ",s[i]);
    }


    for (int i = 0;i<columns;i++)
    {
        if(s[i]>s[i+1] && result<s[i])
        {
            result = s[i];
        }
    }

    printf("\nMax: %d",result);
    return 0;
}
