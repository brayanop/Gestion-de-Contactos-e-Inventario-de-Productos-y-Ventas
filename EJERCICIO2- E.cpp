#include <iostream>
#include <string>
using namespace std;
struct Producto {
    string nombre;
    float precio;
    int id;
};

void EliminarProducto(Producto A[],string BuscarProducto, int& N) {
    bool encontrado = false;
    for (int i = 0; i < N; i++) {
        if (A[i].nombre == BuscarProducto){
            encontrado = true;
            cout<<"Producto encontrado:" << A[i].nombre << endl;
            cout<<"Precio:" << A[i].precio << endl;
            cout<<"Id:" << A[i].id << endl;
            
            for(int j = i; j < N - 1;j++){
                A[j] = A[j + 1];
            }
            N--; 
            cout<<"Producto eliminado"<< endl;
            break;
        }
    }
    if (!encontrado){
        cout<<"Producto no encontrado..."<< endl;
    }
}

int main() {
    const int TAM = 10; 
    Producto est[TAM] = {
        {"Pantalon",25.90, 1342},
        {"Camisa",30.25, 4567},
        {"Chompa",15.9, 8930}
    };
    int N = 3; 
    string BuscarP;
    cout << "Ingrese nombre del producto a eliminar: ";
    cin >> BuscarP;
    EliminarProducto(est, BuscarP, N);
    cout << "* * * Inventario * * * :" << endl;
    for (int i = 0; i < N; i++) {
        cout << "Id: " << est[i].id << endl;
        cout << "Producto: " << est[i].nombre << endl;
        cout << "Precio: " << est[i].precio << endl;
        cout << endl;
    }
    return 0;
}