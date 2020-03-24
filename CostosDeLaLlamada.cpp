//
// Created by jose_ on 23/03/2020.
//

#include "CostosDeLaLlamada.h"

//metodos constructores
CostosDeLaLlamada::CostosDeLaLlamada(int CostoPorMinuto, int TiempoEnMinutos) {
    this-> CostoPorMinuto = CostoPorMinuto;
    this-> TiempoEnMinutos = TiempoEnMinutos;
}
CostosDeLaLlamada::CostosDeLaLlamada(){

}
//metodos setter{

void CostosDeLaLlamada::setCostoPorMinuto(int CostoPorMinuto){
    this-> CostoPorMinuto= CostoPorMinuto;

}
void CostosDeLaLlamada::setTiempoEnMinutos(int TiempoEnMinutos){
    this->TiempoEnMinutos= TiempoEnMinutos;

}

//metodos getter
int CostosDeLaLlamada::getCostoPorMinuto(){
    return this-> CostoPorMinuto;
}
int CostosDeLaLlamada::getTiempoEnMinutos(){
    return this-> TiempoEnMinutos;
}


void CostosDeLaLlamada::calcularCostoDeLaLlamada(){
    this->Costos= this ->CostoPorMinuto * this->TiempoEnMinutos;
}