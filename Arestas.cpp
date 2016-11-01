//
// Created by jean on 31/10/16.
//

#include "Arestas.h"
#include <iostream>
#include <stdlib.h>

Arestas::Arestas(int id, p) {
    idChegada = id;
    peso = p;
}

int Arestas::getIdChegada() {
    return idChegada;
}

int Arestas::getPeso() {
    return peso;
}