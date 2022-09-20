#include<iostream>
 
using namespace std;

 int main(){
 
 	//se declaran las variables
 	int CLA;
 	int CAT; //variable para categoria
 	int ANT; //variable para antiguedad
 	float SAL;
 	int RES;
 	
 	cout<<("Ingresar datos del empleado \n");
 	cout<<"Ingresar categoria del empleado \n";cin>>CAT; //se pide ingresar la categoria del empleado
 	cout<<"Ingresar antiguedad del empleados en la empresa \n";cin>>ANT; //se pide ingresar la categoria del empleado
 	
 	//se determinan las sentencias, agrupando las condiciones necesarias  en donde para if y else if se tiene los requisitos del empleado
 	
 	if (CAT==3&& ANT>7 ){
 		
 		cout<<"El empleado cumple con las condiciones para la sucursal"<<endl;}
 	
	 else if(CAT==4 && ANT>7){
		
		cout<<"El empleado cumple con las condiciones para la sucursal"<<endl;}
	
 		
	else if(CAT==2 && ANT>5){
		
		cout<<"El empleado cumple con las condiciones para la sucursal"<<endl;}
	
	//para todo valor ingresado que no cumpla con los requisitos se condiciona else.
	else{
		cout<<"No cumple con los requisitos" <<endl;
	}
 	
 	return 0;
}
 
