#include <iostream>
using namespace std;

int main(){
	int n;
	cout<<"Ingrese el orden de la matriz cuadrada: ";
	cin>>n;
	
	int MC[n][n];
	cout<<"\nIngrese los elementos de la matriz "<<n<<"x"<<n<<": "<<endl<<endl;
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cout<<"- ELEMENTO "<<i+1<<"x"<<j+1<<": ";
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
