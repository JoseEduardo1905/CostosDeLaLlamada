#include <iostream>
#include "CostosDeLaLlamada.h"

using namespace std;
using std::cout;
using std::endl;

int main() {
    int CostosPorMinuto = 3;
    int TiempoEnMinutos = 35;

    std::cout << "Costo de la llamada:" << CostosPorMinuto*TiempoEnMinutos<< std::endl;
    return 0;
}
