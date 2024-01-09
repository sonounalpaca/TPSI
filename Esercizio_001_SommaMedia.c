// After reading N numbers (integers)
// with N chosen by the user and not exceeding 30 elements,
// calculate the sum and average of even numbers, and odd numbers (use %).

#include <stdio.h>

int main() 
{
    //Variable declaration
    int num, n, n2=0, n3=0, sommap=0, sommad=0; 
    float mediap=0, mediad=0;
    printf("Quanti numeri vuoi inserire?");
    scanf("%d", &n);
    //Validity check 
    while (n<=0 || n>30) 
    {
        printf("Numero non valido. Inserisci un numero compreso tra 1 e 30: ");
        scanf("%d", &n);
    }
    //Number input
    for (int i=0; i<n; i++) 
    {
        printf("Inserire numero: ");
        scanf("%d", &num);
        if (num%2==0) 
        {
            //Even numbers
            n2++;
            sommap=sommap+num;
            //Average even numbers
            if (n2>0) 
            {
                mediap=sommap/n2;
            } 
            else 
            {
                mediap=0;
            }
        } 
        else 
        {
            //Odd numbers
            n3++; 
            sommad=sommad+num;          
            //Average odd numbers
           if (n3 > 0) 
            {
                mediad=sommad/n3;
            } 
            else 
            {
                mediad=0;
            }
        }
    }
    printf("La somma dei pari è: %d\n", sommap);
    printf("La somma dei dispari è: %d\n", sommad);
    printf("La media dei pari é: %0.2f\n", mediap);
    printf("La media dei dispari é: %0.2f\n", mediad);
}