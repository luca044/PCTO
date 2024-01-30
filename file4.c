#include <stdio.h>

int main()
{
    printf("inserisci un numero\n");
    int numero;

    scanf("%d", &numero);
    printf("inserisci un numero da sottrarre al precedente\n");
    int n;
    scanf("%d", &n);
    int x = numero - n;
    printf("il risultato è %d\n", x);
    printf("inserisci un numero da moltiplicare a risultato\n");
    int n1;
    scanf("%d", &n1);
    int x1 = x * n1;
    printf("il risultate è %d\n", x1);
    printf("scegli un altro numero\n");
    int n2;
    scanf("%d", &n2);
    printf("basta mi sono rotto il cazzo\n");
    return(0);
}