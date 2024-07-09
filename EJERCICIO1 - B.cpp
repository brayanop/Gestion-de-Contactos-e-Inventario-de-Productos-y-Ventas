#include <iostream>
using namespace std;

struct contactoEmail {
    string nombres_completos;
    char sexo;
    int edad;
    string telefono;
    string email;
    string nacionalidad;
};

void eliminarContacto(contactoEmail arr[], int &n, int indice) {
    if (indice >= 0 && indice < n) {
        for (int i = indice; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;
    } else {
        cout<<"Contacto no encontrado" << endl;
    }
}
int main() {
    const int TAM = 3;
    contactoEmail contacto[TAM] = {
        {"Brayan Mamani Choque", 'M', 16, "994 546 708", "brayan@gmail.com", "Peruano"},
        {"Jose Llanos Marca", 'M', 18, "994 236 880", "Jhosep@gmail.com", "Peruano"},
        {"Eduardo Vilca Leon", 'M', 17, "954 986 784", "Eduardo@gmail.com", "Peruano"}
    };
    int n = TAM;
    int indice;
    string No_contacto;
    cout << "Ingrese el indice del contacto a eliminar (0 - "<<n-1<<") :" ;
    cin >> indice;
    No_contacto = contacto[indice].nombres_completos ;
    eliminarContacto(contacto, n, indice);
    for (int i = 0; i < n; i++) {
        cout <<"Nombre: " << contacto[i].nombres_completos << endl;
        cout <<"Sexo: " << contacto[i].sexo << endl;
        cout <<"Edad: " << contacto[i].edad << endl;
        cout <<"Telefono: " << contacto[i].telefono << endl;
        cout <<"Email: " << contacto[i].email << endl;
        cout <<"Nacionalidad: " << contacto[i].nacionalidad << endl;
        cout << endl;
    }
   cout<<"* * * Se eliminado el contacto de tu lista * * *" << endl;
   cout << "Nombre del contacto eliminado es :"<<No_contacto << endl;
   return 0;
}