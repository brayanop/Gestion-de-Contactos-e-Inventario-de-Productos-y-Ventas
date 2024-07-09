#include <iostream>
#include <string>

using namespace std;
struct contactoEmail {
    string nombres_completos[100];
    char sexo[100];
    int edad[100];
    string telefono[100];
    string email[100];
    string nacionalidad[100];
};

int main() {
    contactoEmail contacto;
    int cont = 1;
    string rpta;

    for (int i = 0; i < 100; i++) {
        cout << "Ingrese los nombres completos: ";
        getline(cin, contacto.nombres_completos[i]);

        cout<< "Ingrese el sexo (M/F): ";
        cin>>contacto.sexo[i];

        cout<< "Ingrese la edad: ";
        cin>>contacto.edad[i];
        cin.ignore(); 
        
        cout<<"Ingrese el telefono: ";
        getline(cin, contacto.telefono[i]);

        cout<<"Ingrese el email: ";
        getline(cin, contacto.email[i]);

        cout <<"Ingrese la nacionalidad: ";
        getline(cin, contacto.nacionalidad[i]);

        cout<<"Desea ingresar otro contacto (si/no): ";
        cin>> rpta;
        cin.ignore();

        if (rpta !="si") {
            break;
        } else {
        	cout << "Contacto agregados exitosamente." << endl;
        	cout << endl;
            cont++;
        }
	}
    cout << "La cantidad de contactos agregados es:"<<cont << endl;
    
    return 0;
}
