#ifndef FUNCIONES_H
#define FUNCIONES_H
#include<string>
#include<iostream>
using namespace std;
struct contactoEmail{
	string Nom;
	string Sx;
	int Eda;
	string Tel;
	string Mail;
	string Nac;
};
void Agregarcontacto();
void Eliminarcontacto();
void Mostrarcontactos();

#endif