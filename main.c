//
//  main.cpp
//  codigo FInal
//
//  Created by Pablo Fernando PUTO Gonzalez de Lara on 09/10/17.
//  Copyright © 2017 Pablo Fernando Gonzalez de Lara. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    int baraja[52] = {1,2,3,4,5,6,7,8,9,10,11,12,13,1,2,3,4,5,6,7,8,9,10,11,12,13,1,2,3,4,5,6,7,8,9,10,11,12,13,1,2,3,4,5,6,7,8,9,10,11,12,13};
    srand(time(NULL));
    int aux = 0;
    int suma;
    int suma2;
    int i = 0, j = 0, k = 0;
    int C1, C3 = 0;
    int C4, C5, C6;
    int C2;
    int flag = 1;
    int a = 0, b =0, c = 0;
    char respuesta;
    char respuesta1;
    printf(" ----------------------------------------\n");
    printf(" |   ¿Quieres Jugar un BlackJack? S/N   |\n");
    printf(" ----------------------------------------\n");
    scanf("%c",&respuesta);
    if (respuesta =='s'	|| 'S') {
        printf("Tus cartas son: \n");
        i = rand()%52;
        C1= baraja[i];
        baraja[i] = 0;
        j = rand()%52;
        while (i==j) {
            j = rand()%52;
        }
        C2 = baraja[j];
        baraja[j] = 0;
        k = rand()%52;
        C3 = baraja[k];
        baraja[k]= 0;
        if(C1== 1 && C2 == 1) {
            
            flag = 1;
            while (flag == 1) {
                printf("Obtuviste 2 Ases ¿Cuanto Quieres que valga 2 o 12? \n");
                scanf("%d",&aux);
                if (aux==2 || aux == 12) {
                    flag = 0;
                }
                else{
                    printf("Valor no permitido");
                }
            }
        }
        else{
            if ((C1 == 1 || C2 == 1 ) && (C1 >= 10 || C2 >=10)) {
                printf("GANANSTE PAPI, FELICIDADES \n");
            }
                else{
                switch (C1) {
                    case 1:
                        
                    default:
                        if (C1 > 10) {
                                                    }
                        else{
                            if (C1 > 10) {
                                C1 = 10;
                                if (C2 > 10) {
                                    C2 = 10;
                                    suma = C1 + C2;
                                }
                            }
                        }
                        break;
                }
            }
        }
        
        printf(" ----     ---- \n");
        printf("| %d | Y | %d |\n",C1,C2);
        printf(" ----     ---- \n");
        suma= C1+C2;
        printf("la suma de las cartas es: %d \n",suma);
        while (suma<=21 && flag==1) {
            printf("¿Quieres otra carta? S/N \n");
            scanf("%s",&respuesta1);
            getchar();
            if (respuesta1 == 's' || respuesta1 == 'S') {
                suma += C3;
                printf("                                 ---- \n");
                printf("Ahora la suma de tus cartas es :| %d |\n",suma);
                printf("                                 ---- \n");
            }
            else{

                if (suma>21) {
                    printf("Tu puntuacion fue: %d \n",suma);
                    printf("HAS PERDIDO \n");
                    printf("Ahora es turno del Diler...\n");
                    printf("Las cartas del Diler son: \n");
                    a = rand()%52;
                    C4= baraja[a];
                    baraja[a] = 0;
                    b = rand()%52;
                    while (a==b) {
                        b = rand()%52;
                    }
                    C5 = baraja[b];
                    baraja[b] = 0;
                    printf("%d, %d \n",C4,C5);
                    
                    
                }
                else{
                    if(suma==21) {
                        printf("HAS GANADO \n");
                        printf("Ahora es turno del Diler...\n");
                        printf("Las cartas del Diler son: \n");
                        a = rand()%52;
                        C4= baraja[a];
                        baraja[a] = 0;
                        b = rand()%52;
                        while (a==b) {
                            b = rand()%52;
                        }
                        C5 = baraja[b];
                        baraja[b] = 0;
                        printf("%d, %d \n",C4,C5);
                        
                    }
                    else{
                        if (suma<21) {
                            printf("la suma de todas tus cartas fue: %d \n", suma);
                            printf("Ahora es turno del Diler...\n");
                            printf("Las cartas del Diler son: \n");
                            a = rand()%52;
                            C4= baraja[a];
                            baraja[a] = 0;
                            b = rand()%52;
                            while (a==b) {
                                b = rand()%52;
                            }
                            C5 = baraja[b];
                            baraja[b] = 0;
                            printf("%d, %d \n",C4,C5);
                        }
                    }
                }
                flag = 0;
            }

        }
       
    }

    return 0;
}
