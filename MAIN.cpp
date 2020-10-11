#include"Estudiante.cpp"
#include<iostream>
using namespace std;
main(){
	string carnet,nombres,apellidos, carrera,seccion;
	int telefono;
	cout<<"Ingrese carnet: ";
	cin>>carnet;
	cout<<"Ingrese Nombres: ";
	cin>>nombres;
	cout<<"Ingrese Apellidos:";
	cin>>apellidos;
	cout<<"Ingrese carrera:" ;
	cin>>carrera;
	cout<<"Ingrese su seccion:" ;
	cin>>seccion;
	cout<<"Ingrese Telefono: ";
	cin>>telefono;
	
	
	Estudiante obj = Estudiante (carnet,nombres,apellidos,carrera, seccion,telefono);
	obj.mostrar();
	
	
	cout<<"--------- Modificar ------------"<<endl;
	cout<<"Ingrese carnet: ";
	cin>>carnet;
	cout<<"Ingrese Nombres: ";
	cin>>nombres;
	cout<<"Ingrese Apellidos:";
	cin>>apellidos;
	cout<<"Ingrese Carrera: ";
	cin>>carrera;
	cout<<"Ingrese Seccion: ";
	cin>>seccion;	
	cout<<"Ingrese Telefono: ";
	cin>>telefono;
	
	obj.setCarnet(carnet);
	obj.setNombres(nombres);
	obj.setApellidos(apellidos);
	obj.setCarrera(carrera);
	obj.setSeccion(seccion);
	obj.setTelefono(telefono);



			
	
	cout<<obj.getCarnet()<<endl;
	cout<<obj.getNombres()<<endl;
	cout<<obj.getApellidos()<<endl;
	cout<<obj.getCarrera()<<endl;
	cout<<obj.getSeccion()<<endl;
	cout<<obj.getTelefono()<<endl;

	
}

