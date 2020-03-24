//
// Created by jose_ on 23/03/2020.
//

#ifndef PROBLEMA7_COSTOSDELALLAMADA_H
#define PROBLEMA7_COSTOSDELALLAMADA_H


class CostosDeLaLlamada {
//metodos
public:

    //metodos constructores

    CostosDeLaLlamada (int CostoPorMinuto, int TiempoEnMinutos);
    CostosDeLaLlamada ();

    //metodos setter;

    void setCostoPorMinuto(int CostoPorMinuto);
    void setTiempoEnMinutos(int TiempoEnMinutos);

    // metodos getter

    int getCostoPorMinuto();
    int getTiempoEnMinutos();

    void calcularCostoDeLaLlamada();

//atributos
private:
    int CostoPorMinuto;
    int TiempoEnMinutos;
    int Costos;
};


#endif //PROBLEMA7_COSTOSDELALLAMADA_H
