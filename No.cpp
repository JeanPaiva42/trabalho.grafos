//
// Created by jean on 31/10/16.
//
#include "No.h"
#include <iostream>
#include <stdlib.h>

No::No(int a) {
    id = a;
}

void No::setGrauNo(int a) {
    grauNo = a;
}

void No::setPesoNo(int a) {
    pesoNo = a;
}

int No::getGrauNo() {
    return grauNo;
}

int No::getPesoNo() {
    return pesoNo;
}

void No::addAresta(int a, int b) {
    arestas.push_back(a, b);
}
