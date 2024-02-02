#include <stdio.h> 
#include <stdlib.h>

int main()
{   
    int casuale;
    int y=0;
    int x;
    while(x>=0){
    printf("In quale città ha sede il festival della musica dance ed elettronica “Tomorrowland” ?\n\n1. Boom, in Belgio\n2. Parigi, in Francia\n3. Amsterdam, in Olanda\n4. Madrid, in Spagna\n");
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
