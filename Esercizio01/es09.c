//
// Created by Federico Platania on 26/10/2016.
//Esercizio 9
//Dato il seguente array { 35.4, 46.7, 77.55, 11.1, 9.04, 0.75 } di elementi di tipo float,
//eseguire l’ordinamento crescente e decrescente, stamparne il risultato a video


#include <stdio.h>
int main() {
    float array[6] = {35.4, 46.7, 77.55, 11.1, 9.04, 0.75 };
    int i,j;
    float tmp;

    for (i = 0; i < 6; ++i)
    {
        for (j = i + 1; j < 6; ++j)
        {
            if (array[i] > array[j])
            {
                tmp =  array[i];
                array[i] = array[j];
                array[j] = tmp;
            }
        }
    }
    for (i = 0; i < 6 ; i++) {
        printf("array[%d", i);
        printf("]=%f \n", array[i]);
    }

    return 0;
}