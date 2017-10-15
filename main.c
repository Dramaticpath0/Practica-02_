//
//  main.cpp
//  codigo FInal
//
//  Created by Pablo Fernando Gonzalez de Lara on 09/10/17.
//  Copyright © 2017 Pablo Fernando Gonzalez de Lara. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    int Q=10, J=10, K=10, A=11;
    int flag = 1;
    srand(time(NULL) );
    int valor = (rand() % 11 ) + 1;
    int valor2= (rand() % 11 ) + 1;
    int valor3= (rand() % 11 ) + 1;
    char respuesta;
    char respuesta1;
    int suma;
    bool s= true;
    bool n=false;
    printf(" ----------------------------------------\n");
    printf(" |   ¿Quieres Jugar un BlackJack? S/N   |\n");
    printf(" ----------------------------------------\n");
    scanf("%c",&respuesta);
    if (respuesta =='s'	&& 'S') {
        printf("Tus cartas son: \n");
        printf(" ----   ---- \n");
        printf("| %d | Y | %d |\n",valor,valor2);
        printf(" ----   ---- \n");
        suma= valor+valor2;
        printf("la suma de las cartas es: %d \n",suma);
        while (suma<=21 && flag==1) {
            printf("¿Quieres otra carta? S/N \n");
            scanf("%s",&respuesta1);
            getchar();
            if (respuesta1 == 's' || respuesta1 == 'S') {
                suma +=valor3;
                printf("                                 ---- \n");
                printf("Ahora la suma de tus cartas es :| %d |\n",suma);
                printf("                                 ---- \n");
            }
            else{

                if (suma>21) {
                    printf("Tu puntuacion fue: %d \n",suma);
                    printf("HAS PERDIDO \n");
                    printf("Ahora es turno del Diler...\n");
                    
                }
                else{
                    if(suma==21) {
                        printf("HAS GANADO \n");
                        printf("Ahora es turno del Diler...\n");
                        
                    }
                    else{
                        if (suma<21) {
                            printf("la suma de todas tus cartas fue: %d \n", suma);
                            printf("Ahora es turno del Diler...\n");
                            
                        }
                    }
                }
                flag = 0;
            }

        }
       
    }

    return 0;
}
