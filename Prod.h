//
// Created by Administrador on 4/5/2023.
//

#ifndef GUIA1_EJ5_3_PROD_H
#define GUIA1_EJ5_3_PROD_H

typedef struct {
    int codigo;
    char nombre[50];
    int stock;
    int stockmin;
}Producto;

void listar(int, struct Producto *productos);

#endif //GUIA1_EJ5_3_PROD_H
