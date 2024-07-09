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
int main() {
    const int TAM = 3;
    contactoEmail contacto[TAM] = {
        {"Brayan Mamani Choque", 'M', 16, "994 546 708", "brayan@gmail.com", "Peruano"},
        {"Jose Llanos Marca", 'M', 18, "994 236 880", "Jhosep@gmail.com", "Peruano"},
        {"Eduardo Vilca Leon", 'M', 17, "954 986 784", "Eduardo@gmail.com", "Peruano"}
    };
    int n = TAM ;
    cout << " * * * * Mostrando lista general de contactos registrados * * * * "<< endl;
    for (int i = 0; i < n; i++) {
        cout << "Nombre: " << contacto[i].nombres_completos <<endl;
        cout << "Sexo: " << contacto[i].sexo << endl;
        cout << "Edad: " << contacto[i].edad << endl;
        cout << "Telefono: " << contacto[i].telefono << endl;
        cout << "Email: " << contacto[i].email << endl;
        cout << "Nacionalidad: " << contacto[i].nacionalidad << endl;
    }
    return 0;
}
