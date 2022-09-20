/*Escriba una programa que, al recibir
como datos 24 números que representan las temperaturas registradas en el
exterior en un periodo de 24 horas, encuentre, con la ayuda de funciones la
temperatura promedio del día, así como la temperatura máxima y mínima con el
horario en el cual se registraron.
Datos: TEM1, TEM2, ....... , TEM24 (variable de tipo real que representan las
temperaturas).*/

#include<iostream>
#include<stdio.h>
#include<time.h>
#include<ctime>
#include<cstdlib>

using namespace std;

int main(){
	

	srand((unsigned)time( NULL ));
	int i;
	int suma = 0;
	float TEM[24];
	float numeromayor = 0;
	float numeromenor = 0;
	float promedio;
	
	//muestra los 24 valores de temperatura
	for (i=0;i<24;i++){
		TEM [i] = rand();
		printf ("Temperatura a las %d:00 %f\n",i,TEM[i]);
	}
	
	//determinar el valor mayor de temperatura
	for (i=0;i<24;i++){
		if(TEM[i] > numeromayor){
			numeromayor = TEM[i];
		}
	}
	printf("La temperatura mayor es %f \n",numeromayor);
	
	//determinar el valor menor de temperatura
	for (i=0;i<24;i++){
		if(TEM[i-1] >TEM[i]){
			numeromenor = TEM[i];
		}
	}
	printf("La temperatura menor es %f \n",numeromenor);
	
	
	//determinar el promedio de temperatura		
	for (i=0;i<24;i++){
		suma = TEM[i]+suma;
	}
	promedio = suma/24;
	printf("Promedio de temperatura del dia %f",promedio);
	
	return (0);
}
	

