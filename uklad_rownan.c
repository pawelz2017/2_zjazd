#include <stdio.h>


void wczytaj(double *a1, double *b1, double *c1, double *a2, double *b2, double *c2){ 

		printf("\nPodaj wartosc a1: ");
		scanf("%lf", a1);
		
		printf("Podaj wartosc b1: ");
		scanf("%lf", b1);
		
		printf("Podaj wartosc c1: ");
		scanf("%lf", c1);
		
		printf("Podaj wartosc a2: ");
		scanf("%lf", a2);
		
		printf("Podaj wartosc b2: ");
		scanf("%lf", b2);
		
		printf("Podaj wartosc c2: ");
		scanf("%lf", c2);
		
}


double obliczanie_wyznacznika(double w, double x, double y, double z){
	double wyznacznik;
	
	wyznacznik = (w*z - x*y);

//	printf("Wyznacznik: %f", wyznacznik);
	
	return wyznacznik;
}

double oznaczony(double wyznacznik1, double wyznacznik2, double wyznacznik3){
		double x, y;
		
		x = wyznacznik2 / wyznacznik1;
		y = wyznacznik3 / wyznacznik1;
		
		printf("x=%f\n", x);
		printf("y=%f\n", y);
		
		return 0;
}


int main(){
	
		double a1, a2, b1, b2, c1, c2, wyznacznik1, wyznacznik2, wyznacznik3;

		printf("Rozwiazanie ukladu rownan metoda wyznacznikow\n");
		printf("ax+by=c\n");
		
		wczytaj(&a1, &a2, &b1, &b2, &c1, &c2);
//& - zmienna moze byc zmieniona
		
//		printf("\n%fx%f=%f\n", a1,b1,c1);
		
		wyznacznik1 = obliczanie_wyznacznika(a1,b1,a2,b2);
		wyznacznik2 = obliczanie_wyznacznika(c1,b1,a2,c2);
		wyznacznik3 = obliczanie_wyznacznika(a1,c2,c1,a2);

/*		
		printf("Wyznacznik 1: %f\n", wyznacznik1);
		printf("Wyznacznik 2: %f\n", wyznacznik2);
		printf("Wyznacznik 3: %f\n", wyznacznik3);
*/
		
		if(wyznacznik1 != 0){
			printf("\nWyznacznik 1 != 0 - uklad ma jedno rozwiazanie\n");
			oznaczony(wyznacznik1, wyznacznik2, wyznacznik3);
		}else{
			printf("\nUklad jest sprzeczy lub nie ma rozwiazania\n");
		}
		
return 0;
}
