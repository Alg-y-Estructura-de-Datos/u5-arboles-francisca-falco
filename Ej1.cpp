/*Problema: Estás organizando una biblioteca familiar. Cada libro tiene un
número único de identificación (ID) y quieres organizar los libros en un
sistema que te permita agregarlos, eliminarlos y buscarlos fácilmente.
● Tarea: Inserta los libros con los siguientes IDs en el sistema de
gestión (árbol): 101, 52, 198, 36, 75, 150, 200.
● Desafío: Busca el libro con el ID 75 y verifica si está en la biblioteca.
Luego elimina el libro con el ID 52 porque fue prestado. Imprime la
estructura del sistema después de la eliminación.*/
#include <iostream>
#include "Arbol/ArbolBinario.h"
using namespace std;

int main() {
    ArbolBinario<int> biblioteca;

    biblioteca.put(101);
    biblioteca.put(52);
    biblioteca.put(198);
    biblioteca.put(36);
    biblioteca.put(75);
    biblioteca.put(150);
    biblioteca.put(200);

    // Buscar el libro con ID 75
    try {
        int libro = biblioteca.search(75);
        cout << "El libro con ID 75 está en la biblioteca: " << libro << std::endl;
    } catch (int e) {
        if (e == 404) {
            cout << "El libro con ID 75 no está en la biblioteca." << std::endl;
        }
    }

    // Eliminar el libro con ID 52 (prestado)
    biblioteca.remove(52);
    cout << "El libro con ID 52 ha sido eliminado (prestado)." << std::endl;

    // Imprimir la estructura del árbol después de la eliminación
    cout << "Estructura del sistema de libros después de eliminar el ID 52:" << std::endl;
    biblioteca.print(); // Imprime el árbol en orden (en este caso, por IDs de libros)

    return 0;
}