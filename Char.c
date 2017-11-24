#include <stdio.h>

int main(){
   int znak = 0;

    for(znak = 0; znak < 256; znak++){

        printf("Wartosc calkowita: %d,\tkod w ASCII %c\n", znak, znak );

    }


    return 0;
}