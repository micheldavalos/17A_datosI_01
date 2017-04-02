//
// Created by michel on 02/04/2017.
//

#include "Menu.h"

Menu::Menu() {

    string op;

    while (true) {
        cout << "####--Usuarios--####" << endl;
        cout << "1) Registrar" << endl;
        cout << "2) Mostrar" << endl;
        cout << "0) Salir" << endl;
        getline(cin, op);

        if(op == "1"){
            registrar();
        }
        else if(op == "2"){
            mostrar();
        }
        else{
            break;
        }
    }
}

void Menu::registrar() {
    string temp;
    Usuario s;
    Fecha temp_fecha;

    cout << "Nombre: ";
    getline(cin, temp);
    s.setNombre(temp);

    cout << "Apellidos: ";
    getline(cin, temp);
    s.setApellidos(temp);

    cout << "Correo: ";
    getline(cin, temp);
    s.setCorreo(temp);

    cout << "Password: ";
    getline(cin, temp);
    s.setPassword(temp);

    cout << "Id: ";
    getline(cin, temp);
    s.setId(temp);

    cout << "**Fecha de Registro**" << endl;
    pedirFecha(temp_fecha);
    s.setRegistro(temp_fecha);

    cout << "**Fecha de Nacimiento**" << endl;
    pedirFecha(temp_fecha);
    s.setFechaNacimiento(temp_fecha);

    usuarios.insertar_ultimo(s);

}

void Menu::pedirFecha(Fecha &f) {
    string temp;
    stringstream ss;
    int tempFecha;

    cout << "Dia: ";
    getline(cin, temp);
    ss << temp;
    ss >> tempFecha;
    f.setDia(tempFecha);

    cout << "Mes: ";
    getline(cin, temp);
    ss << temp;
    ss >> tempFecha;
    f.setMes(tempFecha);

    cout << "Anio: ";
    getline(cin, temp);
    ss << temp;
    ss >> tempFecha;
    f.setAnio(tempFecha);


}

void Menu::mostrar() {
    unsigned int tamano = usuarios.tamano();
    unsigned int i = 0;

    while(i < tamano ){
        cout << usuarios[i];
        cout << endl;
        i = i + 1;
    }
}
