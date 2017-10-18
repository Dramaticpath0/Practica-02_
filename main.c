//
//  main.cpp
//  BlackJack el chido
//
//  Created by Pablo Fernando Gonzalez de Lara on 18/10/17.
//  Copyright © 2017 Pablo Fernando Gonzalez de Lara. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main(int argc, const char * argv[]) {
    int baraja[52] = {1,2,3,4,5,6,7,8,9,10,11,12,13,1,2,3,4,5,6,7,8,9,10,11,12,13,1,2,3,4,5,6,7,8,9,10,11,12,13,1,2,3,4,5,6,7,8,9,10,11,12,13};
    srand(time(NULL));
    int min = 0;
    int max = 51;
    int suma = 0;
    int C1;
    int AS;
    int C2;
    int C3 = 0;
    int i, j;
    int flag;
    int flagcero;
    char respuesta, respuesta1;
     printf(" ----------------------------------------\n");
    printf(" |  ¿Quieres jugar JackBlack?            |\n");
     printf(" ----------------------------------------\n");
    scanf("%s",&respuesta);
    if (respuesta == 's' || respuesta == 'S' ) {
        i = rand()%52;
        C1= baraja[i];
        baraja[i] = 0;
        j = rand()%52;
        while (i==j) {
            j = rand()%52;
        }
        C2 = baraja[j];
        baraja[j] = 0;
        if (C1>10) {
            switch (C1) {
                case 1:
                    do {
                        printf("Tu carta es un AS ¿Cuanto Quieres que valga 1 u 11? \n");
                        scanf("%d",&AS);
                    } while (AS!=1 && AS!=11);
                    C1=AS;
                case 11:
                    C1=10;
                case 12:
                    C1=10;
                case 13:
                    C1 = 10;
            }

        }
        if (C2>10) {
            switch (C2) {
                case 11:
                    C2=10;
                case 12:
                    C2=10;
                case 13:
                    C2 = 10;
                case 1:
                    do {
                        printf("Tu carta es un AS \n");
                        printf("¿Cuanto Quieres que valga 1 u 11? \n");
                        scanf("%d",&AS);
                    } while (AS!=1 && AS!=11);
                    C1=AS;
            }
        }
        printf("Tus cartas son: %d,%d \n", C1,C2);
        suma = C1 + C2;
        printf("La suma de tus cartas es: %d \n",suma);
    }
    flag = 1;
    while (flag == 1) {
        printf("¿Quieres otra carta S/N \n");
        scanf("%s",&respuesta1);
        if (respuesta1 == 's' || respuesta1 == 'S') {
            
                C3 = baraja[rand()%52];
                if (C3 == 0) {
                    flagcero =1;
                }
            suma+=C3;
            printf("Tu proxima carta es: %d \n",C3);
            printf("Ahora la suma de tus cartas vale: %d \n",suma);
            if (suma>21) {
                printf("HAS PERDIDO \n");
                break;
            }
            else{
                if (suma==21) {
                    printf("GANASTE PAPI, FELICIDADES");
                    break;
                }
                else{
                        flag = 1;
                }

            }
                }
        else{
               flag = 0;
        }
        
    }

    return 0;
}
