/*
At a certain amount of money (related to the purchase of a product), 
a discount is to be applied based on the entered amount following the following scheme:
from 0 to €500 discount of 10%;
from 501 to 1000 discount of 20%;
beyond 1001 discount of 30%;
After calculating and displaying the discount and the net price on the screen, 
the program should allow for the re-entry of additional sums of money.
*/

#include <stdio.h>
void main()
{
    //Variable declaration
    double importo = 0.0, sconto = 0.0, totale = 0.0;
    char risposta;
    //Discount applicationunt 
    do {
        printf("Inserire l'importo da scontare: \n");
        fflush(stdin);
        scanf("%lf", &importo);
        //0 to €500 discount of 10%
        if (importo > 0 && importo <= 500) {
            sconto = (importo * 10) / 100;
            totale = importo - sconto;
            printf("Il prezzo scontato e': %.2f\n", totale);
        } 
        //501 to 1000 discount of 20%
        else if (importo >= 501 && importo <= 1000) 
        {
            sconto = (importo * 20) / 100;
            totale = importo - sconto;
            printf("Il prezzo scontato e': %.2f\n", totale);
        }
        // 1001 discount of 30%
        else if (importo > 1000) 
        {
            sconto = (importo * 30) / 100;
            totale = importo - sconto;
            printf("Il prezzo scontato e': %.2f\n", totale);
        } 
        else 
        {
            printf("L'importo inserito non e' valido.\n");
        }
        printf("Inserire un nuovo importo? (S/N)\n");
        scanf(" %c", &risposta);  
    } while (risposta=='S');
}