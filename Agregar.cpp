#include<iostream>
#include<string>
#include "funciones.h"
using namespace std;
const int Ctc = 100;
struct contactoEmail{
	string Nom;
	string Sx;
	int Eda;
	string Tel;
	string Mail;
	string Nac;
};
contactoEmail Ag[Ctc];
int Tctc = 0;
void Agregarcontacto(){
	if(Tctc<Ctc){
		contactoEmail nuevo;
		cout<<"Nombre completo: ";
		getline(cin, nuevo.Nom);
		cout<<"Sexo: ";
		getline(cin, nuevo.Sx);
		cout<<"Edad: ";
		cin>>nuevo.Eda;
		while(nuevo.Eda<=0){
			cout<<"Intentelo de nuevo"<<endl;
			cin>>nuevo.Eda;
		}
		cin.ignore();
		cout<<"Numero de telefono: ";
		getline(cin, nuevo.Tel);
		cout<<"Email: ";
		getline(cin, nuevo.Mail);
		cout<<"Nacionalidad: ";
		getline(cin, nuevo.Nac);
		Ag[Tctc] =  nuevo;
		Tctc++;
		cout<<"Contacto agregado"<<endl;
	}else{
		cout<<"No se puede agregar mas contactos. Limite alcanzado"<<endl;
	}
}