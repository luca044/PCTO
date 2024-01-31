#include <stdio.h>
int Somma(int a, int b){
    int somma;
    somma=a+b;
    return(somma);
}
int main(){
    int x=12;
    int y=7;
    int z= Somma(x,y);
    printf("il risultato è : %d\n", z);

    return(0);
}