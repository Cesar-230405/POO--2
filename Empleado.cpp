#include "Persona.cpp"
# include <iostream>
using namespace std;
class Empleado : Persona{
	 
	private :string codigo_empleado, Puesto;


	public : 
		 Empleado(){
	}
	Empleado(string cod_empleado,string puesto)
					:Persona(nom, ape,dir,tel,fechanac){
						codigo_empleado= cod_empleado;
						Puesto= puesto;
					
					
	}

  void setFecha_nacimiento(string fechanac){fecha_nacimiento=fechanac;}
  void setcodigo_empleado(string cod_empleado){codigo_empleado = cod_empleado;}
  void setPuesto(string puesto){Puesto=puesto;}
  void setNombres(string nom){nombres = nom;}
  void setApellidos(string ape){apellidos = ape;}
  void setDireccion(string dir){direccion = dir;}
  void setTelefono(int tel){telefono = tel;}



  string getFecha_nacimento(){return fecha_nacimiento;}
  string getcodigo_empleado(){return cod_empleado;}
  string getPuesto(){return puesto;}
  string getNombres(){	return nombres;}
  string getApellidos(){ return apellidos;}
  string getDireccion(){ return direccion;}
  int getTelefono(){	return telefono;}
  
  
   void mostrar(){
	cout<<codigo_empleado<<","<<Puesto<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<","<<fecha_nacimiento<<endl;
		}
	 void agregar(){	
		cout<<"atributos agregrados exitosamente"<<endl;
}
};
