#include <iostream>
using namespace std;

string dia[7]={"Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado", "Domingo"};
string D[7]={"(L)", "(M)", "(M)", "(J)", "(V)", "(S)", "(D)"};

int main(){
    float vd[7][4], vs[4]={0, 0, 0, 0}, vm=0;

    for(int j=0; j<4; j++){
        cout<<"Ingrese las ventas de la semana "<<j+1<<": "<<endl;
        for(int i=0; i<7; i++){
            cout<<" - "<<dia[i]<<": ";
            cin>>vd[i][j];
            vs[j]=vs[j]+vd[i][j];
        }
        vm=vm+vs[j];
        cout<<endl;
    }

	system("cls");	
    cout<<"VENTAS DE CUATRO SEMANAS"<<endl;
    cout<<"-------------------------------------------"<<endl;  
    cout<<"\tSEM1 \tSEM2 \tSEM3 \tSEM4"<<endl;
    
    for(int i=0; i<7; i++){
        cout<<D[i]<<"\t";
        for(int j=0; j<4; j++){
            cout<<vd[i][j]<<"\t";
        }
        cout<<endl;
    }   
    cout<<"-------------------------------------------"<<endl;
    for(int j=0; j<4; j++){
        cout<<"\t"<<vs[j];
    }
    cout<<endl;
    cout<<"-------------------------------------------"<<endl;    
    cout<<"Venta total del mes: "<<"\t"<<vm<<endl;
    return 0;
}