#include "Persona.cpp"
# include <iostream>
using namespace std;
class Cliente : Persona{
	 
	private :string nit;


	public : 
		 Cliente(){
	}
	Cliente(string nom,string ape,string dir,int tel, string fechanac, string n)
					:Persona(nom, ape,dir,tel,fechanac){
						nit= n;
					
					
	}

  void setFecha_nacimiento(string fechanac){fecha_nacimiento=fechanac;}
  void setNit(string n){nit = n;}
  void setNombres(string nom){nombres = nom;}
  void setApellidos(string ape){apellidos = ape;}
  void setDireccion(string dir){direccion = dir;}
  void setTelefono(int tel){telefono = tel;}



  string getFecha_nacimento(){return fecha_nacimiento;}
  string getNit(){return nit;}
  string getNombres(){	return nombres;}
  string getApellidos(){ return apellidos;}
  string getDireccion(){ return direccion;}
  int getTelefono(){	return telefono;}
  
  
   void mostrar(){
	cout<<nit<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<","<<fecha_nacimiento<<endl;
		}
	 void agregar(){	
		cout<<"atributos agregrados exitosamente"<<endl;
}
};

