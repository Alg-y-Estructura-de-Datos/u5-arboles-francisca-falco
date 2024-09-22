/*Problema: Un restaurante tiene un sistema de reservas donde cada
mesa tiene un número específico. A medida que los clientes reservan
o cancelan mesas, el sistema debe mantenerse actualizado.
● Tarea: Agrega las reservas de las siguientes mesas: 15, 10, 20, 5,
12, 18, 25.
● Desafío: Dos clientes cancelaron sus reservas en las mesas 10 y 20,
así que elimínalas del sistema. Luego, un nuevo cliente reserva la
mesa 13. Verifica si la mesa 12 aún está reservada e imprime la lista
actualizada de mesas reservadas.*/
#include <iostream>
#include "Arbol/ArbolBinario.h"
using namespace std;

int main() {
    ArbolBinario<int> reservas;

    reservas.put(15);
    reservas.put(10);
    reservas.put(20);
    reservas.put(5);
    reservas.put(12);
    reservas.put(18);
    reservas.put(25);

    reservas.remove(10);
    reservas.remove(20);
    cout<<"Se eliminaron las reservas de la mesa 10 y la mesa 20"<<endl;

    reservas.put(13);
    cout<<"Se reservo la mesa 13"<<endl;

    try{
        bool reservada=reservas.search(12);
        if(reservada){
            cout<<"La mesa 12 esta reservada"<<endl;
        }
    }catch (int e){
        cout<<"La mesa 12 no esta reservada"<<endl;
    }

    cout<<"Lista de reservas:"<<endl;
    reservas.print();
    return 0;
}
