
#include <math.h>
#include<iostream>
#include<stdio.h>
#include<time.h>
#include<ctime>
#include<cstdlib>

using namespace std;

int main(){
	
	int N ;
	float ALU[N];
	float media = 0;
	float varianza = 0;
	float desviacion;
	float moda;
	int i;
	int notas;
	
	cout<<"Ingrese la cantidad de notas del alumno\n"; cin>>N;
	cout<<"Ingrese las notas del alumno (numero entero)\n";
	
	//ingresar cantidad de notas al arreglo y asignar manualmente cada nota en un espacio del arreglo 
	for(i=0;i<N;i++){
		cin>>notas;
		ALU[i]=notas;
	}
	
	//obtener media aritmetica
	for(i=0;i<N;i++){
		media = ALU[i]+media;
	}
	printf ("La media aritmetica es:%f \n",media/N);
	
	//obtener varianza
	for(i=0;i<N;i++){
		varianza = (ALU[i]-(media/N))*(ALU[i]-(media/N))+varianza;
    }
    printf ("La varianza es:%f\n",varianza/(N-1));
    
	//obtener desviacion estandar
	desviacion = sqrt(varianza/(N-1));
	printf ("La desviacion estandar es:%f\n",desviacion);
	
	return 0;
}
