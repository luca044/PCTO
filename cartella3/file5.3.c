#include <stdio.h>
void VocaleOConsontante(){
    printf("scrvi una lettera\n");
    char x;
    scanf(" %c", &x);
    if((x>=65 && x<=90) || (x>=97 && x<=122)){
    if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u' || x=='A' || x=='E' || x=='I' || x=='O' || x=='U'){
        printf("%c è una vocale\n", x);


    } else{
        printf("%c è una consonante\n", x);
    }
} else{ 
    printf("%c non è una lettera\n", x);
}}
int main(){
    VocaleOConsontante();
    VocaleOConsontante();
    VocaleOConsontante();
    return(0);
}