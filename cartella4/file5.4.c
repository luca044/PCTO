#include <stdio.h>

int main() {
    char parola[100];
    int x=0;

    printf("Inserisci una parola:\n");
    scanf(" %s", parola);

    while(parola[x] != '\0') {
        
        if (parola[x] >= 'a' && parola[x] <= 'z') {
            parola[x] = parola[x] - 32;
        }
        x=x+1;
    }

    printf("La parola convertita in maiuscolo è:%s\n", parola);
    return 0;
}