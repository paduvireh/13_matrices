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
	int SDS=0;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(i+j==n-1)
				SDS=SDS+MC[i][j];
		}	
	}	
	cout<<"\nLa suma de los elementos de la diagonal secundaria es: "<<endl;
	cout<<SDS<<endl;
	return 0;
}
