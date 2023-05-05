//
// Created by Administrador on 4/5/2023.
//
#include<stdio.h>
#include "Prod.h"
void listar(int n, Producto *productos){
    for(int i=0; i<n; i++){
        if(productos[i].stock < productos[i].stockmin){
            printf("El producto %s esta en falta en %d existencias\n", productos[i].nombre, productos[i].stockmin-productos[i].stock);
        }
    }
}