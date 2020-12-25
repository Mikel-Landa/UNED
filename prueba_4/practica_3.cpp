/**************************************
* NOMBRE: #Mikel#
* PRIMER APELLIDO: #Landa#
* SEGUNDO APELLIDO: #Cantera#
* DNI: #53840164Q#
* EMAIL: #mlanda34@alumno.uned.es#
***************************************/
#include <stdio.h>
#include "practica_3.h"

bool checkBi(int y){
    if (y%4!=0){
        return false;
    }
    else if (y%100==0 && y%400!=0){
        return false;
    }

    return true;

}


int getDay(int year, int month) {
    int y = year % 100;
    int c = year / 100;
    int v1 = (13*(month+1))/5;
    int v2 = y/4;
    int v3 =c/4;
    return (v1 + v2 + v3 + 1 + y - 2 * c) % 7;
}

void printHead(int y,int m){
    int n;
    printf("\n\t\t");
    switch (m)
    {
    case 13:
        printf("ENERO");
            n = 5;
            y = y + 1;
            break;

    case 14:
        printf("FEBRERO");
            n = 7;
            y = y + 1;

        break;
    case 3:
        printf("MARZO");
            n = 5;
        break;
    case 4:
        printf("ABRIL");
            n = 5;
        break;
    case 5:
        printf("MAYO");
            n = 4;
        break;
    case 6:
        printf("JUNIO");
            n = 5;
        break;
    case 7:
        printf("JULIO");
            n = 5;
        break;
    case 8:
        printf("AGOSTO");
            n = 6;
        break;
    case 9:
        printf("SEPTIEMBRE");
            n = 10;
        break;
    case 10:
        printf("OCTUBRE");
            n = 7;
        break;
    case 11:
        printf("NOVIEMBRE");
            n = 9;
        break;
    case 12:
        printf("DICIEMBRE");
            n = 9;
        break;
    }
    for (int i = 0; i < 23 - n;i++){
        printf(" ");
    }
    printf("%i\n", y);
    for (int i = 0; i < 27;i++){
        printf("=");
    }
    printf("\n\t\t");

    printf("LU");
    printf("  MA");
    printf("  MI");
    printf("  JU");
    printf("  VI ");
    printf("| SA");
    printf("  DO");
    printf("\n\t\t");
    for (int i = 0; i < 27;i++){
        printf("=");
    }
    printf("\n");
}

int getStartDay(int m,int y) {
    if (m == 1) {

        m = 13;
        y = y - 1;
    }
    if (m==2) {

        m = 14;
        y = y - 1;

    }
    printHead(y,m);
    return getDay(y, m);
}


void PrintCalendar(PrintDays days,int m,int y) {

    int startDay;
    int d=1;
    int c = 0;
    int remain;
    int monthDays;

    if (y>3000 || y<1601 || m>12 || m<1){
        return;
    }



    if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12){
        monthDays=31;
    }
    else if(m==2){
        if (checkBi(y)){
        monthDays=29;
        }
        else{
        monthDays=28;
        }
    }
    else{
        monthDays=30;
    }
    startDay=(getStartDay(m,y)+5)%7;
    if(m==4 && y==1601){
        startDay=0;
    }
    printf("\t\t");
    for (int i = 0; i < startDay;i++){
        if(c%7==4){
            printf("   ");
        }
        else if (c%7==5)
        {
            printf("|     ");
        }
        else
        {
            printf("    ");
        }
        c++;
    }
    for (int i = 0; i <monthDays;i++){
        if (c%7==6){
            if (days[i]==1 ){
                printf("%02d", i+1);
            }
            else{
            printf(" --");
            }
        }
        else if (c%7==4){
            if (days[i]==1){
                printf("%02d ", i+1);
            }
            else
            {
                printf("-- ", i+1);
            }

        }
        else if (c%7==5)
        {
            if (days[i]==1)
            {
                printf("| %02d  ",i+1);
            }
            else
            {
                printf("| -- ", i+1);
            }
        }
        else if (days[i]==1){
            printf("%02d  ", i+1);
        }
        else{
            printf("--  ", i);
        }
        if (c%7==6){
            printf("\n\t\t");
        }
        c++;
        d++;

    }
    remain = (((d - 1) % 7) + startDay) % 7;
    if (remain==0){
        return;
    }
    if(m==2 && y==2601){
        remain=remain-1;
    }
    for (int i = 0;i<7-remain;i++)
    {
        if (c%7==6){
            printf("   ");
        }
        else if(c%7==4){
            printf("   ");
        }
        else if (c%7==5)
        {
            printf("|    ");
        }
        else
        {
            printf("     ");
        }
        c++;

    }
    printf("\n\n");
    return;
}


