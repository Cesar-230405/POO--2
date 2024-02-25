#include <iostream>
using namespace std;
class Persona{
	
	
	  protected : string Nombres, Apellidos, Direccion, Fecha_nacimiento;
	              int Telefono;
	  
	  protected : Persona(){
	  }
	  Persona (string nom, string ape, string dir, string fecha_nac, int tel){
	  	nombres=nom;
	  	apellidos = ape;
		direccion = dir;
		fecha_nacimiento = fecha_nac;
		telefono = tel;
	  }
	  
	void Crear();
	void Leer();
	void Actualizar();
	void Borrar();
	
};