#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Ingrese el orden de la matriz cuadrada: ";
	cin>>n;
	
	int MC[n][n];
	cout<<"\nIngrese los elementos de la matriz: "<<endl;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin>>MC[i][j];
		}	
	}
	return 0;
}
