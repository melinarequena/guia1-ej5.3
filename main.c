/*Diseñar un programa que lleve el registro de una cantidad (que el usuario
determinará en tiempo de ejecución) de productos con los siguientes datos:
a. Código
b. Nombre
c. Stock
d. Stock Mínimo
 Realizar una función que liste los códigos de los productos que se encuentran por
debajo del stock mínimo, junto con la cantidad que se requiere para que dejen de
estarlo.*/

#include<stdio.h>
#include<stdlib.h>
#include"Prod.h"


int main(){
    int n;
    printf("Ingrese cantidad de productos:\n"); // asigno memoria dinamica(?
    scanf("%d", &n);
    Producto *productos = malloc(n*sizeof(struct));

    for(int i=0; i<n; i++){
        printf("Ingrese codigo del producto %d\n", i+1);
        scanf("%d", &productos[i].codigo);
        printf("Ingrese nombre del producto %d\n", i+1);
        scanf("%s", &productos[i].nombre);
        printf("Ingrese stock del producto %d\n", i+1);
        scanf("%d", &productos[i].stock);
        printf("Ingrese stock minimo del producto %d\n", i+1);
        scanf("%d", &productos[i].stockmin);
    }
    listar(n, productos);
    free(productos);
    return 0;
}
