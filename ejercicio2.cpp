#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
	
	int s; //numero de sonidos emitidos en un minuto
	float FA;
	float C;
	
	
	cout<<"Ingresar numero de sonidos emitidados de la chicharra "<<endl; cin>>s;
	FA = s/(4+402.1); //formula para obtener los grados fahrenheit en funcion de s
	
	cout <<"La temperatura en Fahrenheit"<<endl;
	cout<< FA <<endl;
	
	C = (FA-32)/1.8; //formula para convertir de grados fahrenheit a grados celsius
	cout <<"La temperatura en Celsius"<<endl;
	cout << C <<endl;
	
	return 0;
}
