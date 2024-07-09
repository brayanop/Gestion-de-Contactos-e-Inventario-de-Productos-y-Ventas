#include <iostream>
#include <string>
#include <algorithm> 
using namespace std;
struct contactoEmail {
    string nombres_completos;
    char sexo;
    int edad;
    string telefono;
    string email;
    string nacionalidad;
};

void intercambiar(contactoEmail& p1, contactoEmail& p2) {
    contactoEmail temp = p1;
    p1 = p2;
    p2 = temp;
}
void ordenar(contactoEmail contacto[], int num) {
    for (int i = 0; i < num-1; i++) {
        for (int j = 0; j < num - i - 1; j++) {
            size_t pos1 = contacto[j].email.find('@');
            size_t pos2 = contacto[j + 1].email.find('@');
            string dominio1 = contacto[j].email.substr(pos1 + 1);
            string dominio2 = contacto[j + 1].email.substr(pos2 + 1);
            if (dominio1 > dominio2) {
                intercambiar(contacto[j], contacto[j + 1]);
            }
        }
    }
}

int main() {
    contactoEmail contacto[] = {
        {"Brayan Mamani Choque", 'M', 16, "994 546 708", "brayan@gmail.com", "Peruano"},
        {"Jose Llanos Marca", 'M', 18, "994 236 880", "Jhosep@yahoo.com", "Peruano"},
        {"Eduardo Vilca Leon", 'M', 17, "954 986 784", "Eduardo@outlook.com", "Peruano"},
        {"Marcos Sosa Mendosa", 'M', 24, "924 956 567", "Eduardo@gmail.com", "Peruano"},
        {"Julia Carla Gonzales Quispe", 'F', 19, "954 985 991", "Eduardo@gmail.com", "Peruano"}
    };
    int N = sizeof(contacto) / sizeof(contacto[0]);
    ordenar(contacto, N);
    cout << "Listado de contactos ordenados por dominio de correo:"<<endl;
    for (int i = 0; i < N; ++i) {
        cout<<"Nombre completo: " <<contacto[i].nombres_completos<<endl;
        cout<<"Sexo: " <<contacto[i].sexo <<endl;
        cout<<"Edad: " <<contacto[i].edad << endl;
        cout<<"Telefono: " <<contacto[i].telefono <<endl;
        cout<<"Correo electronico: "<<contacto[i].email <<endl;
        cout<<"Nacionalidad: " <<contacto[i].nacionalidad <<endl;
        cout<< endl;
    }
    return 0;
}
