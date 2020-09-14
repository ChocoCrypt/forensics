#include <stdio.h>

int main(){
    int a = 10 ;
    switch(a){
        case 10:
            a++;
        case 20:
            a--;
        case 100:
            printf("a es %d \n" , a );
        default:
            printf("jojojo \n" );
    }
    return 0;
}

