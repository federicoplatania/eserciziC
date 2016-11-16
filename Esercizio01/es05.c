//
// Created by Federico Platania on 26/10/2016.
//
//Esercizio 5
//Dato un array con N elementi di tipo Float, eseguirne la sottrazione e stamparli a video con un numero di cifre decimali pari a 2.


#include <stdio.h>
int main() {
    float array[10] = {1.55,2.55,3.55,4.55,5.55,6.55,7.55,8.55,9.55,10.55};
    int i;
    float m = 0;
    for (i = 0; i < 10 ; i++) {
        m-=array[i];
    }
    printf("sottrazione = %f",m);
    return 0;
}