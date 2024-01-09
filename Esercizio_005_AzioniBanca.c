/*
A bank wants to gather some information about the stocks in its portfolio.
Write the C program that, after entering the stock name and its price from the keyboard, 
determines and displays the following in the output:
1) The sum of stock prices;
2) The average stock price;
3) The stock with the maximum price;
4) The stock with the minimum price;
5) The average stock price with a value between 2.50 and 3.50 euros, inclusive.
The input process ends with the word "terminato" (terminated). The program should allow re-entering the price if it is zero or less.
*/

#include <stdio.h>	
void main()
{
    //Variables
    double prezzo[100];
    char nome[100];
    double somma1=0.0, somma2=0.0, media1=0.0, media2=0.0, min=0.0, max=0.0;
    int cont, conta;
    int n=0;
    //Entering stocks
    do {
        printf("Inserire denominazione dell'azione:\n");
        printf("Scrivere la parola 'terminato' per finire l'inserimento\n");
        scanf("%s", nome);
        if(nome[0]!='t' || nome[1]!='e' || nome[2]!='r' || nome[3]!='m' || nome[4]!='i' || nome[5]!='n' || nome[6]!='a' || nome[7]!='t' || nome[8]!='o' || nome[9]!='\0')
        {
            break;
        }
        printf("Inserire prezzo azione:\n");
        scanf("%lf", &prezzo[n]);
        // Checking stock value
        while (prezzo[n]<=0) {
            printf("Valore non accettabile. Inserire nuovamente prezzo azione:\n");
            scanf("%lf", &prezzo[n]);
        }
        if (prezzo[n]>=2.50 && prezzo[n]<=3.50) {
            conta++;
            somma2=somma2+prezzo[n];
        }
        cont++;
        // Sum
        somma1=somma1+prezzo[n];
        n++;
    } while (nome[0]!='t' || nome[1]!='e' || nome[2]!='r' || nome[3]!='m' || nome[4]!='i' || nome[5]!='n' || nome[6]!='a' || nome[7]!='t' || nome[8]!='o' || nome[9]!='\0');
    // Average prices between 2.50 and 3.50
    if (conta>0) {
        media2=somma2/conta;
        printf("\nLa media dei valori compresi tra 2.50 e 3.50 e': %.2lf\n", media2);
    }
    // Average of all entered values
    if (cont>0) {
        media1 = somma1 / cont;
        printf("La media di tutti i valori e': %.2lf\n", media1);
    }
    printf("La somma di tutti i valori e': %.2lf\n", somma1);
    // Sorting array
    for (int i=0; i<n-1; i++) 
    {
        for (int j=0; j<n-i-1; j++) 
        {
            if (prezzo[j] > prezzo[j + 1]) 
            {
                double a=prezzo[j];
                prezzo[j]=prezzo[j + 1];
                prezzo[j + 1]=a;
            }
        }
    }
    // Printing values
    min=prezzo[0];
    max=prezzo[n - 1];
    printf("Il valore piu' piccolo e': %.2lf\n", min);
    printf("Il valore piu' grande e': %.2lf\n", max);

}