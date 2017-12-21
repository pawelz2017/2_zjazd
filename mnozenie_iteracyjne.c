#include <stdio.h>
int main()
{
    int a, b, i = 0, wynik = 0;

    printf("Mnozenie iteracyjne\n");

    printf("Podaj pierwsza liczbe: ");
    scanf("%i", &a);

    printf("Podaj druga liczbe: ");
    scanf("%i", &b);



    while(i != b){

        wynik = a + wynik;
        i++;
    }

    printf("Wynik mnozenia iteracyjnego wynosi: %i\n", wynik);
    return 0;
}
