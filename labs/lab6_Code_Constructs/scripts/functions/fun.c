#include <stdio.h>


int func(int a, int b){
    return(a+b);
}

int main(){
    int a = 10;
    int b = 0x10;
    int variable = func(a,b);
    printf("la variable es %d \n" , variable);
    return 0;
}

