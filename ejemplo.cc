#include <iostream>
#include <stdio.h>

using namespace std;

int num1, num2, suma;

int main(){
    printf("\tBUENOS DIAS\n");
    
    printf("\tDigite el primer numero que quiere sumar\n");
    scanf("%d", &num1);
    printf("\tDigite el segundo numero que quiere sumar\n");
    scanf("%d", &num2);

    suma = num1+num2;
    printf("El resultado de la suma es:  %d",suma);

    cin.ignore();
    cin.get();

    return 0;
}