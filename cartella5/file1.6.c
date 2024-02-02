#include <stdio.h> 
#include <stdlib.h>
#include <unistd.h>

int main()
{   
   
    int y=0;
    int t;
    printf("In quale città ha sede il festival della musica dance ed elettronica “Tomorrowland” ?\n\n1. Boom, in Belgio\n2. Parigi, in Francia\n3. Amsterdam, in Olanda\n4. Madrid, in Spagna\n");
    
    
    scanf(" %d", &t);
    if(t==1){
        y=y+1;
        printf(" CORRETTO     punteggio: %d\n", y);
    }else{
        printf(" SBAGLIATO    punteggio: %d\n", y);
    }
    sleep(1);
    system("clear");
     printf("Nel moderno sistema musicale, quante sono, in tutto, le tonalità maggiori e minori?\n\n1.Ventiquattro\n2.Dodici\n3.Venti\n4.Trentasei\n");
    
    int g;
    scanf(" %d", &g);
    if(g==1){
        y=y+1;
        printf(" CORRETTO     punteggio: %d\n", y);
    }else{
        printf(" SBAGLIATO    punteggio: %d\n", y);
    }
    sleep(1);
    system("clear");
    printf("9. In quale opera si canta Nessun dorma?\n\n1.Cavalleria rusticana, di Mascagni\n2.Mosè, di Rossini\n3.Otello, di Verdi\n4.Turandot, di Puccini\n");
    
    int s;
    scanf(" %d", &s);
    if(s==4){
        y=y+1;
        printf(" CORRETTO     punteggio: %d\n", y);
    }else{
        printf(" SBAGLIATO    punteggio: %d\n", y);
    }
    sleep(1);
    if(y==3){
        printf("CONGRATULAZIONI!!!\n\nHai il 5x100 di sconto sull'acquisto del prossimo biglietto\n");
    } else if(y!=3){
        printf("Peccato, hai perso...\n");
    }


    return(0);
}