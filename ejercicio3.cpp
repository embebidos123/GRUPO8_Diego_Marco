#include<iostream>
#include<stdio.h>
#include<cstdlib>
#include <bitset>

using namespace std;

int main(){
	
	
	int N = 255;
	int i=0;
	int arreglo[254];
	int posicion;
	
	for(i=0;i<N;i++){
		
		arreglo[i] = rand()%256; //arreglo de tamaño 255 y la funcion rand es para asignarle valor aleatorios a cada lugar del arreglo
    }
	
	printf("Ingrese posicion del arreglo para mostrar numero\n");
	cin>>posicion;
	
	printf("Valor %d\n",arreglo[posicion]);
	bitset<9> bs(arreglo[posicion]);
	cout <<"Numero en binario:\n" << bs << endl;
}
