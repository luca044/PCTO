#include <stdio.h>
int main(){
    printf("insersici le coordinate di un punto\n");
    float x;
    scanf(" %f", &x);
    float y;
    scanf(" %f", &y);
    if (x>0 && y>0)
    {
        printf("il punto P(%.2f,%.2f) si trova sul primo quadarante\n", x,y);

    } else if (x<0 && y>0)
    {
        printf("il punto P(%.2f,%.2f) si trova sul secondo quadarante\n", x,y);
    } else if (x<0 && y<0)
    {
        printf("il punto P(%.2f,%.2f) si trova sul terzo quadarante\n", x,y);
    } else if (x<0 && y>0)
    {
        printf("il punto P(%.2f,%.2f) si trova sul quarto quadarante\n", x,y);
    } else if (x==0 && y!=0)
    {
        printf("il punto P(%.2f,%.2f) si trova sull'asse delle x\n", x,y);
    } else if (x!=0 && y ==0)
    {
        printf("il punto P(%.2f,%.2f) si trova sull'asse delle y\n", x,y);
    } else{
        printf("il punto P(%.2f,%.2f) si trova all'origine degli assi\n", x,y);
    }
    
    
    
    
    return(0);
    
}