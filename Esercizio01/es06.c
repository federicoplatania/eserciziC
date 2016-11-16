//
// Created by Federico Platania on 26/10/2016.
//Esercizio 6
//Dato il seguente array { 35.4, 46.7, 77.55, 11.1, 9.04, 0.75 } di elementi di tipo float,
//eseguirne la MEDIA ARITMETICA e stamparne il risultato a video

#include <stdio.h>
int main() {
    float array[6] = {35.4, 46.7, 77.55, 11.1, 9.04, 0.75 };
    int i;
    float s = 0;
    float m=0;
    for (i = 0; i < 6 ; i++) {
       s+=array[i];
    }
    m = s / 6;
    printf("media aritmetica  = %.02f",m);
    return 0;
}
