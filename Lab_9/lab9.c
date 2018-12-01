#include <stdio.h>
#include <string.h>

void formfile (FILE *f) {
    char buffer[255];
    printf("Enter 5 strings to fill f1.bin: \n");
    for (int i=0; i<5; i++) {
        fgets(buffer,255,stdin);
        fputs(buffer, f);
        if (ferror(f)) {
            printf("Error while writing!\n");
        }
    }
  rewind(f);
};

void showfile (FILE *f) {
    char buffer[255];
    int i=1;
    if (f) {
        while (fscanf(f, "%s", buffer) != EOF) {
        printf("%d. %s\n",i,buffer);
        i++;
        }
    }
    rewind(f);
};
int copy(FILE *f,FILE*f2,int rows){
    int n1,n2;
    printf("N1:");
    scanf("%d",&n1);
    printf("N2:");
    scanf("%d",&n2);
    printf("\n");
    char buffer[255];
    for (int i = 0; i < 5; ++i) {
        fgets(buffer,255,f);
        if (i + 1 >= n1 || n2 <= i + 1) {
        if (buffer[strlen(buffer) - 2] == 'a') {
            fputs(buffer, f2);
            rows++;
        }
        }
    }
return rows;
}
void finda(FILE *f,int rows){
    char buffer[255];
    int counter=0;
    int max=0;
    int rowmax=0;
    for (int i = 0; i < rows; ++i) {
        fgets(buffer,255,f);
        for (int j = 0; j < strlen(buffer); ++j) {
            if(buffer[j]=='a'){
                counter++;
            }
        }
            if(max<counter){
            max=counter;
            rowmax=i+1;
            }
            counter=0;
    }
    printf("%d",rowmax);

}
int main() {

FILE *file1;
FILE *file2;
file1 = fopen("gg.txt","w");
formfile(file1);
fclose(file1);
int rows=0;
file1 = fopen("gg.txt","r");
file2 = fopen("ggg.txt","w");
showfile(file1);
rows = copy(file1,file2,rows);
fclose(file1);
fclose(file2);
file2 = fopen("ggg.txt","r");
finda(file2,rows);
fclose(file2);
return 0;
}
