#include <stdio.h>

int main(){
    int a = 10;
    if(a==10){
        if(a == 12){
            //imposible si el flujo de ejecucion
            //no es modificado
            printf("%d es igual a 12", a);
        }
    }
    return 0 ;
}
