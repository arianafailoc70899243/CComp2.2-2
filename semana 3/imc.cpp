#include <iostream>
using namespace std;

int main(){
    int peso, altura;

    cout<<"ingrese peso en kg: ";
    cin>>peso;
    cout<<"ingrese su altura en mts: ";
    cin>>altura;

    int resultado = peso/(altura*altura);

     cout<<"Calculadora de INDICE DE MASA CORPORAL"<<endl;
    if ( resultado <= 18.5 ){
        cout<<"bajo peso"<<endl;
    }

    else if (18.5> resultado< 24.9){
        cout<<"peso normal"<<endl;
    }

    else if ( 25>resultado<29.9){
        cout<<"sobrepeso"<<endl;
    }
    else if( resultado>=30){
        cout<<"obesidad"<<endl;
    }

    return 0;
}