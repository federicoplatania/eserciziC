//
// Created by Federico Platania on 26/10/2016.
//
//Esercizio 3
//Dato un array con N elementi di tipo Integer, eseguirne la sottrazione e stamparla a video

//
#include <stdio.h>
int main() {
    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    int i;
    int s = 0;
    for (i = 0; i < 10 ; i++) {
        s-=array[i];
    }
    printf("sottrazione = %d",s);
    return 0;
}