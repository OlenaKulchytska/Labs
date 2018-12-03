#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define COUNT_ROWS 2
typedef struct
{
    char marka[30];
    int year;
    int cost;
    char color[20];

}CARS;

CARS fill_cars(){
    CARS el;
    printf("Marka: "); scanf("%s",el.marka);
    printf("Year: "); scanf("%d",&el.year);
    printf("Cost: "); scanf("%d",&el.cost);
    printf("Color: "); scanf("%s",el.color);

    return el;
}
int write_to_file(CARS mas[COUNT_ROWS],int count,char* file)
{
    FILE *f;
    if ((f=fopen(file, "w"))==NULL) return -1;
    for(int i = 0; i < count;i++) fwrite(&(mas[i]), sizeof(CARS),1,f);
    fclose(f);
    return 1;
}

int read_file(CARS mas[COUNT_ROWS],char* file){
    FILE *f;
    int i = 0;
    if ((f=fopen(file, "r"))==NULL) return -1;
    while(!feof(f)&&i<=COUNT_ROWS) {
        fread(&mas[i],sizeof(CARS),1,f);
        i++;
    }
    fclose(f);
    return i - 1;
}
void delete_cars(CARS *mas){
    int ye;
    printf("Enter the year,before which to delete ");
    scanf("%d",&ye);
    for(int i=0;i<9;i++){
        if(ye>mas[i].year){
            mas[i].year = 0;
        }
    }
}
void add_cars(CARS *mas){
    for(int i=8; i>=0; i--){
        mas[i] = mas[i-1];
    }
    mas[0] = fill_cars();
}
int main() {

    CARS mas[10];
    int i;
    for(i=0; i<COUNT_ROWS;i++)
    {
        printf("Car%d \n",i+1);
        mas[i] = fill_cars();
    }
    int m;
    printf("Enter the amount of cars to add= ");
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        add_cars(mas);
    }
    delete_cars(mas);
    write_to_file(mas,COUNT_ROWS+m,"file.txt");
    int count = read_file(mas,"file.txt");

    for(int i = 0;i < count+m;i++){
        if(mas[i].year != 0){
            printf("Marka: %s ",mas[i].marka);
            printf("Year: %d ", mas[i].year);
            printf("Cost: %d ",mas[i].cost);
            printf("Color: %s ",mas[i].color);

            printf("\n");
        }
    }

    return 0;
}
