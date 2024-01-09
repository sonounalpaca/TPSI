/*
Scrivere un programma in C che,
dopo aver letto N numeri (n scelto dall'utente) 
calcoli e visualizzi a video la somma dei numeri positivi, 
la somma dei numeri negativi in valore assoluto, 
il conteggio dei numeri negativi e positivi, 
la media dei numeri positivi e negativi.
*/

#include <stdio.h>

int main() {
    // Variables
    int num=0, cont=0;
    int somma1=0, somma2=0;
    int positivi=0, negativi=0;
    double media1=0, media2=0;
    // Numbers to input
    printf("Quanti numeri vuoi inserire\n");
    scanf("%d", &cont);
    // Positive numbers
    for (int i=0; i<cont; i++) 
    {
        printf("Inserire un numero positivo o negativo\n");
        scanf("%d", &num);
        // Negative numbers
        if (num>=0) 
        {
            positivi++;
            somma1=somma1+num;
            media1=somma1/positivi;
        }
        else 
        {
            negativi++;
            somma2=somma2+num;
            media2=somma2/negativi;
        }
    }
    // Print results
    printf("Numeri positivi inseriti: %d\n", positivi);
    printf("La somma nei numeri positivi e': %d\n", somma1);
    printf("La media dei numeri positivi e': %0.2f\n", media1);
    printf("Numeri negativi inseriti: %d\n", negativi);
    printf("La somma nei numeri negativi e': %d\n", somma2);
    printf("La media dei numeri negativi e': %0.2f\n", media2);
}