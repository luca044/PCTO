#include <stdio.h> 
#include <stdlib.h>

int main()
{   
    int casuale;
    int y=0;
    int x;
    while(x>=0){
    printf("scegli un numero da 0 a 10\n");
    scanf(" %d", &x);
    
    casuale = rand()%11;

    printf("%d\n", casuale);
    if(x==casuale){
        y=y+1;
        printf(" CORRETTO     punteggio: %d\n", y);
    }else{
        printf(" SBAGLIATO    punteggio: %d\n", y);
    }
    } 

    return(0);
}
