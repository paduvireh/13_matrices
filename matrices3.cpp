#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Ingrese el valor de n: ";
    cin>>n;

    int f=n;
    int c=3*n;
    int M[f][c];

    for(int i=0; i<f; i++){
        for(int j=0; j<c; j++){
            if(i==0 || i==f-1 || j==0 || j==c-1)
                M[i][j]=1;
            else
                M[i][j]=0;
        }
    }
    for(int i=0; i<f; i++){
        for(int j=0; j<c; j++){
            cout<<M[i][j];
        }
        cout<<endl;
    }
    return 0;
}
