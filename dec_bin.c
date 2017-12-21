#include <stdio.h>
int main(){

    int dec, bin;

    printf("Konwersja systemu dziesietnego do binarnego\n");
    printf("Podaj liczbe dziesietna calkowita\n");
    scanf("%i", &dec);


    do{

        printf("%d ", dec % 2);
        dec /= 2;

    }while(dec > 0);

    printf("\nOdczytuj od tylu\n");

    return 0;
}