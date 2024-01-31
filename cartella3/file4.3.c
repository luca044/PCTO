#include <stdio.h>
void StampaCubo(){
    int x;

    printf("scegli un numero\n");
    scanf("%d", &x);
    printf("il cubo di %d è %d\n", x,x*x*x);

}
int main(){
    StampaCubo();
    StampaCubo();
    StampaCubo();
    StampaCubo();
    return(0);
}