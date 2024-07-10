#include <iostream>
#include <string>
using namespace std;
struct producto {
    string nombre;
    float precio;
};
 void Act_producto(producto A[], string Buscarproducto, int N,float actualizarprecio) {
    bool encontrado = false;
    float Actualizar_producto;
    for (int i = 0; i < N; i++) {
        if (A[i].nombre == Buscarproducto) {
            encontrado = true;
            cout<<"Producto encontrado:"<< A[i].nombre << endl;
			cout <<" Precio: "<< A[i].precio << endl;
            A[i].precio = actualizarprecio;
            cout <<" EL nuevo Precio: "<< A[i].precio << endl;
			break;
        }
    }
    if (!encontrado) {	
        cout << "Producto no encontrado" << endl;
    } 
}

int main() {
    const int N = 3;
    string BuscarP;
    float precio;
    producto est[N] = {
        {"Pantalon", 25.90 },
        {"camisa", 30.25 },
        {"Chompa", 15.9 }
    };
    cout << "Ingrese nombre del producto: ";
    cin >> BuscarP;
    cout << "Ingrese el nuevo precio: ";
    cin >> precio;
    Act_producto(est, BuscarP, N,precio);
    return 0;
}