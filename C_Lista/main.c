/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Chriss Ramos
 *
 * Created on June 5, 2019, 6:57 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */

typedef struct{
    struct nodo* siguiente;
    char* nombre;
}nodo;

nodo* primer = NULL;
nodo* ultimo = NULL;

void agregar(nodo* _nodo){
    _nodo -> siguiente = NULL;
    
    if(primer == NULL){
        primer = _nodo;
        ultimo = _nodo;
    }else{
        ultimo -> siguiente = _nodo;
        ultimo = _nodo;
    }
}

int main() {
    nodo* primerNodo = malloc(sizeof(nodo));
    primerNodo -> nombre = "Primer Elemento";
    
    nodo* segundoNodo = malloc(sizeof(nodo));
    segundoNodo -> nombre = "segundo Elemento";
    
    nodo* tercerNodo = malloc(sizeof(nodo));
    tercerNodo -> nombre = "tercer Elemento";
    
    agregar(primerNodo);
    agregar(segundoNodo);
    agregar(tercerNodo);
    
    nodo* i = primerNodo;
    while(i != NULL ){
        printf("%s\n", i -> nombre);
        i = i -> siguiente;
    }
    
    return 0;
}

