#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Ingrese el tamano de la matriz cuadrada: ";
	cin>>n;
	
	int M[n][n];
	cout<<"Ingrese los elementos de la matriz: "<<endl;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin>>M[i][j];
		}
	}
	return 0;
}
