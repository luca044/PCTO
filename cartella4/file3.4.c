#include <stdio.h>
void Max(float a, float b){
    if(a>b){
        printf("%f è maggiore di %f\n", a,b);
    } else{
        printf("%f è maggiore di %f\n", b,a);
    }

}
int main(){
    float x;
    float y;
    scanf(" %f", &x);
    scanf(" %f", &y);
    Max(x,y);
    return(0);

}