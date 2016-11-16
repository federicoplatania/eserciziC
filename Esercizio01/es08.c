//
// Created by Federico Platania on 26/10/2016.
//Esercizio 8
//Dato il seguente array { 35.4, 46.7, 77.55, 11.1, 9.04, 0.75 } di elementi di tipo float,
// indicare il maggiore, il minore e il valore medio, stamparne il risultato a video

#include <stdio.h>
int main() {
    float array[6] = {35.4, 46.7, 77.55, 11.1, 9.04, 0.75 };
    int i,j,k;
    float tmp;
    float maggiore;
    float minore;
    float medio;
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
    minore = array[0];
    maggiore=array[5];
    medio=array[2];
    printf("il minore= %f \n", minore);
    printf("il maggiore= %f \n", maggiore);
    printf("il medio= %f \n", medio);
    return 0;
}

