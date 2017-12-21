#include<stdio.h>
int main()
{
    unsigned  long long int liczba, silnia = 1, i = 1;

    printf("Podaj liczbe naturalna: ");
    scanf("%lli", &liczba);



    while (i < liczba)
    {
        i++;
//        silnia *= i;
        silnia = silnia * i;
    }
    printf("Silnia liczby: %lli, to: %lli\n", liczba, silnia);
    return 0;
}
