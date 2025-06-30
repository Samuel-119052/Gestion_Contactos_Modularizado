#ifndef FUNCIONES_H
#define FUNCIONES_H
#include<string>
#include<iostream>
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
void Agregarcontacto();
void Eliminarcontacto();

#endif