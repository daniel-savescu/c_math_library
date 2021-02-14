#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

//prototipuri functii

void functiePatrat();

void functieDreptunghi();

void functieCerc();

void meniuProgram();



//structuri arii

struct dreptunghi{
    int lungime;
    int latime;
}dreptunghi;


struct patrat{
    int latime;
}patrat;


int main(){

    meniuProgram();

    return 0;
}


//Declaratii de functii

void meniuProgram(){

    int optiune = 0;

    printf("1. Afla aria dreptunghiului.\n\n");
    printf("2. Afla aria patratului.\n\n");
    printf("3. Afla aria cercului.\n\n");
    printf("Introduceti optiunea: \n\n");

    scanf("%d", &optiune);

    switch(optiune){

        case 1: functieDreptunghi();
                break;

        case 2: functiePatrat();
                break;

        case 3: functieCerc();
                break;

       default: printf("Optiunea nu exista");

    }

}


void functieDreptunghi(){

    printf("\n\nIntroduce-ti latime: ");
    scanf("%d", &dreptunghi.latime);

    printf("\n\nIntroduce-ti lungime: ");
    scanf("%d", &dreptunghi.lungime);

    int arieDreptunghi = dreptunghi.latime * dreptunghi.lungime;

    printf("\n\nAria dreptunghiului este: %d", arieDreptunghi);
}

void functiePatrat(){

    printf("\n\nIntroduce-ti latura: ");
    scanf("%d", &patrat.latime);

    int ariePatrat = patrat.latime * patrat.latime;

    printf("\n\nAria patratului este: %d", ariePatrat);
}

void functieCerc(){

    const double PI = 3.14;

    double razaCercului;

    printf("\n\nIntroduce-ti raza cercului: ");
    scanf("%lf", &razaCercului);

    printf("\n\nAria cercului este: %.2f", PI * (razaCercului * razaCercului));

}


