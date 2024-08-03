#include <iostream>
using namespace std;

int main(){
    int n, m;
    cout<<"Ingrese el numero de partidos politicos: "; cin>>n;
    cout<<"Ingrese el numero de ciudades: "; cin>>m;

    int votos[m][n];
    int P[n]={0};

    for(int i=0; i<m; i++){
        cout<<"\nIngrese los votos para cada partido en la ciudad #"<<i+1<<endl;
        for(int j=0; j<n; j++){
            cout<<" - Partido "<<j+1<<": "; cin>>votos[i][j];
            P[j]=P[j]+votos[i][j]; // numero de votos de cada partido
        }
    }

    // a. El partido que gana la eleccion a nivel nacional
    
    int gNacional=0;
    for(int j=1; j<n; j++){ // partidos
        if(P[j]>P[gNacional]) 
            gNacional=j;
    }
    cout<<"\nPARTIDO GANADOR NACIONAL: Partido #"<<gNacional+1<<endl<<endl;

    // b. El partido ganador por cada ciudad
	
	cout<<"PARTIDO GANADOR POR CIUDAD: "<<endl;
	for(int i=0; i<m; i++){ // ciudades
	    int gCiudad=gNacional;
	
	    for(int j=0; j<n; j++){ // partidos
	        if(votos[i][j]>votos[i][gCiudad]) 
	            gCiudad=j;
	    }
	    cout<<" - Partido ganador en la ciudad #"<<i+1<<" es el Partido #"<<gCiudad+1<<endl;
	}
	
    // c. Ciudad donde tuvo mayor votacion el partido ganador
    
    int cgNacional=0;
    for(int i=1; i<m; i++){ // ciudades
        if(votos[i][gNacional]>votos[cgNacional][gNacional])
            cgNacional=i;
    }
    cout<<"\nLa ciudad donde el partido ganador tuvo mayor votacion es la ciudad #"<<cgNacional+1<<endl;

    return 0;
}