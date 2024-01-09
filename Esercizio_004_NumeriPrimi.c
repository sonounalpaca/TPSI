/*
Given a positive integer N,
print the sum of the first N prime numbers alternated (one yes and one no).
*/

#include <stdio.h>

int main()
{
    // Variables
    int n, somma=0, num=2, cont=0, nprimo=0;
    // Input n
    do
    {
        printf("Inserisci un numero intero positivo N: \n");
        scanf("%d", &n);
        if (n<=0)
        {
            printf("Il numero deve essere positivo\n");
            printf("Inserisci un numero intero positivo N: \n");
            scanf("%d", &n);
        }
    } while (n<=0);
    // Calculation of the sum of prime numbers
    while (num<=n)
    {
        primo=1;
        // Verification of divisibility
        for (int i= ; i<num; i++)
        {
            if (num%i==0)
            {
                //Not prime
                primo=0; 
                break;
            }
        }
        if (primo==1)
        {
            cont++;
            if (cont % 2 == 1)
            {
                printf("Numero primo alternato: %d\n", num);
                somma=somma+num;
            }
        }
        num++;
    }
    printf("La somma dei primi numeri primi alternati fino a %d e': %d\n", N, somma);
}