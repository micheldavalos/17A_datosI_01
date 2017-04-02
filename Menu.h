//
// Created by michel on 02/04/2017.
//

#ifndef ACTIVIDAD01_MENU_H
#define ACTIVIDAD01_MENU_H

#include <iostream>
#include <sstream>

#include "arreglo.h"
#include "Usuario.h"
using namespace std;
class Menu {
private:
    arreglo<Usuario> usuarios;
    void pedirFecha(Fecha &f);

public:
    Menu();
    void registrar();
    void mostrar();
};


#endif //ACTIVIDAD01_MENU_H
