#include <iostream>
#include <string>

using namespace std;
using std::string;

char** crearMatriz(int);
void liberarMatriz(char**,int);

int main(){
	int opcm=0;
	while(opcm!=2){
		cout<<"Menu"<<endl
			<<"1. Mazmorra"<<endl
			<<"2. Salir"<<endl
			<<"Ingrese una opcion: "<<endl;
		cin>>opcm;
	}	
}

char** crearMatriz(int size){
	char** matriz=new char*[size];
	for(int i=0;i<size;i++){
		matriz[i]=new char[size];
	}
	return matriz;
}

void liberarMatriz(char** matriz,int size){
	if(matriz!=NULL){
		for(int i=0;i<size;i++){
			delete[] matriz[i];
			matriz[i]=NULL;
		}
		delete[] matriz;
		matriz=NULL;
	}
}
