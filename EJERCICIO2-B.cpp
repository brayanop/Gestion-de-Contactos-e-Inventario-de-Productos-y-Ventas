#include <iostream>
#include <string>
using namespace std;
struct Producto {
    string nombre;
    float precio;
};
struct Venta {
    int idVenta;
    int cantidad;
    Producto producto; 
};
int main() {
    const int N = 3;
    Venta ventas[N] = {
        {1267, 5, {"Arroz Integral", 19.9}},
        {1255, 25, {"Azucar Blanca", 25.5}},
        {4567, 19, {"Maiz", 20.9}}
    };
    cout << "Listado los productos Registrados :" << endl;
    for (int i=0; i<N;i++) {
        cout<<"Venta ID:"<<ventas[i].idVenta << endl;
        cout<<"Producto:"<<ventas[i].producto.nombre << endl;
        cout<<"Precio:"<<ventas[i].producto.precio << endl;
        cout<<"Cantidad:"<<ventas[i].cantidad << endl;
        cout<< endl;
    }
    return 0;
}