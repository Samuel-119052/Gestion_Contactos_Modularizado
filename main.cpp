#include <iostream>
#include <string>
#include "funciones.h"
using namespace std;
int main() {
	char op;
	while(op!='5'){
		cout<<"Menu"<<endl;
		cout<<"1) Agregar contacto"<<endl;
		cout<<"2) Eliminar contacto"<<endl;
		cout<<"3) Mostrar listado general de contactos"<<endl;
		cout<<"4) Mostrar listado de contactos por servidor de correo"<<endl;
		cout<<"5) Salir"<<endl;
		cout<<"Seleccione una opcion"<<endl;
		cin>>op;
		cin.ignore();
		if(op=='1'){
			Agregarcontacto();
		}else if(op=='2'){
			//Eliminarcontacto();
		}else if(op=='3'){
			//Mostrarcontactos();
		}else if(op=='4'){
			//Mostrarcontactosporservidor();
		}else if(op=='5'){
			cout<<"Saliendo del programa..."<<endl;
		}else{
			cout<<"Opcion no valida. Intente de nuevo"<<endl;
		}
	}
	return 0;
}