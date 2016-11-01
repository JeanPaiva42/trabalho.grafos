//
// Created by jean on 31/10/16.
//

#ifndef TRABALHO_GRAFOS_NO_H
#define TRABALHO_GRAFOS_NO_H

//Classe No, seria os nossos vertices, essa classe contem os dado de identificação, peso e grau do no...
class No {
private:
    int id;
    int pesoNo;
    int grauNo;
    vector <Arestas> arestas;
public:
    No(int a);

    void setPesoNo(int a);

    void setGrauNo(int a);

    int getPesoNo();

    int getGrauNo();

    void addAresta(int a, int b);
};

#endif //TRABALHO_GRAFOS_NO_H
