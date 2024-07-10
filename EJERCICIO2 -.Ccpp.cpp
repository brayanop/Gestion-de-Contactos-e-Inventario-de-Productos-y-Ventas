#include <iostream>
#include <string>
using namespace std;
struct Producto {
    string nombre;
    float precio;
    int id;
};
void BuscarProducto(Producto A[],string BuscarProducto,int N) {
    bool encontrado = false;
    for (int i = 0; i < N; i++) {
        if (A[i].nombre == BuscarProducto) {
            encontrado = true;
            cout<<"Producto encontrado:"<<A[i].nombre << endl;
            cout<<"Precio: "<<A[i].precio << endl;
            cout<<"Id: "<<A[i].id << endl;
        }
    }
    if (!encontrado) {
        cout<<"Producto no encontrado." << endl;
    }
}

int main() {
    const int TAM = 10;
    Producto est[TAM] = {
        {"Pantalon", 25.90, 1342},
        {"Camisa", 30.25, 4567},
        {"Chompa", 15.9, 8930}
    };
    int N = 3;
    string BuscarP;
    cout << "Ingrese nombre del producto: ";
    cin >> BuscarP;
    BuscarProducto(est, BuscarP, N);
    return 0;
}