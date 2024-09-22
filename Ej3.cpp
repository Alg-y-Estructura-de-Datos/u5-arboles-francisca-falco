/*Problema: Estás diseñando un sistema de inscripción para un gimnasio,
donde cada socio tiene un número de socio único. El sistema debe permitir
la inscripción de nuevos socios, la eliminación de socios que se dan de
baja, y la búsqueda de socios activos.
● Tarea: Inscribe a los socios con los siguientes números de socio: 500,
250, 750, 100, 300, 600, 800.
● Desafío: Un socio con el número 250 se da de baja, así que elimínalo.
Luego, verifica si los socios con los números 300 y 750 aún están activos.
Imprime la lista de socios actualizada*/
#include <iostream>
#include "Arbol/ArbolBinario.h"
using namespace std;

int main() {
    ArbolBinario<int> gimnasio;

    gimnasio.put(500);
    gimnasio.put(250);
    gimnasio.put(750);
    gimnasio.put(100);
    gimnasio.put(300);
    gimnasio.put(600);
    gimnasio.put(800);

    gimnasio.remove(250);
    cout<<"Se elimino al socio 250"<<endl;

    try {
        bool activo=gimnasio.search(300);
        if (activo){
            cout<<"El socio 300 esta activo"<<endl;
        }
    }catch (int e){
        cout<<"El socio 300 no esta en el sistema"<<endl;
    }

    try {
        bool activo=gimnasio.search(750);
        if (activo){
            cout<<"El socio 750 esta activo"<<endl;
        }
    }catch (int e){
        cout<<"El socio 750 no esta en el sistema"<<endl;
    }

    cout<<"Lista de socios"<<endl;
    gimnasio.print();
    return 0;
}
