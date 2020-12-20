

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>




int getDay(int year, int month) {
    int y = year % 100;
    int c = year / 100;
    int v1 = (13*(month+1))/5; 
    int v2 = y/4;
    int v3 =c/4;
    return (v1 + v2 + v3 + 1 + y - 2 * c) % 7;
}



int getStartDay() {
    
    printf("Mes (1..12)?");
    int m; 
    scanf("%i", &m);
    printf("Anyo (1601..3000)?");
    int y; 
    scanf("%i", &y); 
    if (m == 1) {
        
        m = 13;
        y = y - 1;
    } 
    if (m==2) {

        m = 14;
        y = y - 1;

    }
    
    return getDay(y, m);
}


int main() {

    int startDay;
    int d=1;
    int c = 0;
    int remain;
    startDay=getStartDay();

    printf("\n");
    for (int i = 0; i < startDay;i++){
        if(c%7==4){
            printf("  . ");
        }
        else if (c%7==5)
        {
            printf("|  .  ");
        }
        else
        {
            printf("  .  ");
        }
        c++;
        }
    for (int i = 0; i < 30;i++){
        if (c%7==4){
            if (d<10){
                printf("  %i  ", d)
            }
            else
            {
                printf(" %i  ", v6);
            }
            
        }
        else if (c%7==5)
        {
            if (d > 9)
            {
                printf("|  %i  ", v6)
            }
            else
            {
                printf("|  %i  ", v6);
            }
        }
        else if (d>9){
            printf("  %i  ", d);
        }
        else{
            printf("  %i  ", d)
        }
        if (c%7==6){
            printf("\n");
        }
        
    }
    remain = (((d - 1) % 7) + d - 1) % 7;
    for (int i = 0;i<remain;i++)
    {
        printf("  .  ");
    }

    return 0;
}
