#include <bits/stdc++.h>
using namespace std;
struct Producto {
    string nombre;
    float precio;
};
struct Venta {
    int idVenta;
    string producto;
    int cantidad;
    float precioTotal;
};
int main() {
    const int N = 100;
    Producto inventario[N];
    Venta inventarioV[N];
    string rpta;
    int i = 0;
    
    while (rpta != "No" && rpta != "no") {
        cout << "Desea registrar un producto? (Si/No)" << endl;
        cin >> rpta;
        if (rpta == "Si" || rpta == "si") {
            cout <<"Ingrese los datos del producto:" << endl;
            cout <<"ID de Venta: ";
            cin >>inventarioV[i].idVenta;
            cin.ignore();
            cout <<"Nombre: ";
            getline(cin, inventario[i].nombre);
            cout<<"Precio: ";
            cin >>inventario[i].precio;
            cout<<"Stock: ";
            cin >>inventarioV[i].cantidad;
            i++;
        }
    }
    cout << "Inventario:" << endl;
    for (int j = 0; j < i;j++) {
        cout <<"ID de Venta: "<<inventarioV[j].idVenta<< endl;
        cout <<"Nombre: "<<inventario[j].nombre<<endl;
        cout <<"Precio: "<<inventario[j].precio<<endl;
        cout <<"Stock: "<<inventarioV[j].cantidad<<endl;
        cout <<endl;
    }
    
    return 0;
}