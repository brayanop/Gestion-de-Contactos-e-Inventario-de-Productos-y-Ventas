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
    int op;
    do{
    cout << "* * Menu de Opciones * *" << endl;
	cout << " 1) Agregar un contacto " << endl;
	cout << " 2) Eliminar un contacto" << endl;	
	cout << " 3) Mostrar listado general de contactos registrados hasta ese momento " << endl;
	cout << " 4) Mostrar listado de contactos existentes, ordenado por servidor de correo de las cuentas" << endl;
	cout << " 5) Salir del programa" << endl;	
	cout << "Ingrese su opcion: ";
    cin >> op;
    switch(op){
       case 1:	
       break;
       case 2:
       break;
       case 3:	
       break;
       case 4:
       break;	
       case 5:
       	cout << "* * * Saliendo del programa * * *"<< endl;
	   break;
	}
    }while(op!=5);
    return 0;
}