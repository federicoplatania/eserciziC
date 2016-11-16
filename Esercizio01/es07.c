//
// Created by Federico Platania on 26/10/2016.
//Esercizio 7
//Dato il seguente array { 35.4, 46.7, 77.55, 11.1, 9.04, 0.75 } di elementi di tipo float,
//eseguirne la MEDIA PONDERATA con pesi pari alla corrispondente posizione inversa, e stamparne il risultato a video

//808.23 / 21 = 38.48

#include <stdio.h>
int main() {
    float array[6] = {35.4, 46.7, 77.55, 11.1, 9.04, 0.75};
    int i;
    float s = 0;
    float s2 =0;
    float m=0;
    float p = 5;
    for (i = 0; i < 6 ; i++) {
        s+=array[i]*p;
        s2+=p;
        p--;
    }
    m = s / s2;
    printf("media ponderata  = %.02f",m);
    return 0;
}