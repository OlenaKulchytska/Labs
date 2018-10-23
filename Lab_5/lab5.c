#include <stdio.h>
void scan(int rows, int columns, int matrix[30][30])
{
   for (int i = 0; i <rows ;i++) {
        for (int j = 0; j <columns ; j++) {
            printf("Enter an element [%d][%d]: ",i+1,j+1);
            scanf("%d",&matrix[i][j]);
        }
    }
}
void print(int rows, int columns, int matrix[30][30])
{
for (int i = 0; i <rows ;i++) {
        printf("|");
        for (int j = 0; j <columns ; j++) {
            printf(" %d |", matrix[i][j]);
        }

        printf("\n");
    }
}


int main() {
    int result=0;
    int rows,columns;


    printf("Enter an amount of rows: ");
    scanf("%d",&rows);
    printf("Enter an amount of columns: ");
    scanf("%d",&columns);
    int matrix[30][30];
    int s[columns];
    
    scan(rows,columns,matrix);
    printf("\n");
    print(rows,columns,matrix);
    printf("\n");
  
    for(int j = 0; j<columns; j++)
    {
        s[j] = 0;
    }
    for (int i = 0; i <columns-1 ; i++) {
        for (int j = 0; j < rows-1;j++) {
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

    printf("\nMax: %d\n",result);
    return 0;
}
