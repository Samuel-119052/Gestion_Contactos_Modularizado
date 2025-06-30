#include<iostream>
#include<string>
#include "funciones.h"
using namespace std;
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
void Eliminarcontacto(){
	if(Tctc==0){
		cout<<"No hay contactos registrados"<<endl;
	}else{
		string BuContc;
		cout<<"Ingrese el email del contacto a eliminar: ";
		getline(cin, BuContc);
		int ContcEli = -1;
		for(int i= 0; i < Tctc; i++){
			if(Ag[i].Mail == BuContc){
				ContcEli=i;
			}
		}
		if(ContcEli != -1){
			for(int j = ContcEli; j<Tctc-1; j++){
				Ag[j]=Ag[j+1];
			}
			Tctc--;
			cout<<"Contacto eliminado"<<endl;
		}else{
			cout<<"Contacto no encontrado"<<endl;
		}
	}
}