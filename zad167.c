// Program treba vratiti vise od 1 rezultata iz funkcije pomocu poziva prema referenci.

#include<stdio.h>
#include<stdlib.h>

func(int x, int y, int *ps, int *pr, int *pp);

int main( )
{
        int a, b, suma, razlika, produkt;
        a = 6;
        b = 4;
        func( a, b, &suma, &razlika, &produkt );
        printf("Suma = %d, razlika = %d, produkt = %d\n", suma, razlika, produkt );

        return 0;
}

// U pozivu prema referenci adrese varijabli se salju funkciji.
func(int x, int y, int *ps, int *pr, int *pp)
{
        *ps = x+y;
        *pr = x-y;
        *pp = x*y;
}
