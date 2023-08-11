#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero;
    int nNumero;
    int arrBinario[] = {0,0,0,0};
    div_t division;
    int n2;
    
    printf("Ingrese el numero que quiere pasar a binario: ");
    scanf("%d",&numero);

    if(numero > 15){
        printf("El numero no puede ser mayor a 15");
    }else{
        nNumero = numero;
        for (int i = 0; i < 4; i++)
        {
            division = div(nNumero,2);
            arrBinario[i] = division.rem;
            nNumero = division.quot;
        }

        printf("El numero binario es: ");
        for (int i = 3;  i > -1; i--)
        {
            printf("%d",arrBinario[i]);
        }
        
    }
    
    

}