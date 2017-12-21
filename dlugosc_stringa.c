#include <stdio.h>
#include <string.h>

#define n 30

int main()
{

    char tab[n] = {0};
    int i=0;


    printf("Podaj stringa\n");
    scanf("%s", tab);


    printf("strlen\n");
    printf("String sklada sie z %li znakow\n", strlen(tab));

    while(1){

   //     printf("%c\n", tab[i]);
        i++;
       if(tab[i] == 0){
           printf("While\n");
           printf("String sklada sie z %i znakow\n", i);
           break;
       }

    }



    return 0;
}