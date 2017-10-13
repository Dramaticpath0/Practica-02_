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
    int min=1, max=11;
    int flag = 1;
    srand( time(NULL) );
    int valor = (rand() % 11 ) + 1;
    int valor2= (rand() % 11 ) + 1;
    int valor3= (rand() % 11 ) + 1;
    char respuesta, suma, respuesta2;
    printf("¿Quieres Jugar un JackBlack? S/N \n");
    scanf("%c",&respuesta);
    if (respuesta =='s'	|| 'S') {
        printf("Tus cartas son: \n");
        printf("%d, %d \n",valor,valor2);
        suma= valor+valor2;
        while (suma<=21 && flag==1) {
            printf("¿Quieres otra carta? S/N \n");
            scanf("%c",&respuesta2);
            if (respuesta =='s'	|| 'S') {
                suma +=valor3;
                printf("tienes : %c",suma);
            }
            suma +=valor3;
            printf("tienes : %c",suma);
        }
        
        
    }
    return 0;
}
