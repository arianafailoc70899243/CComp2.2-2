#include <iostream>
using namespace std;

int main(){
    int y;

    cout<<"ingrese un anio: ";
        cin>>y;

        if(y%4==0 and y%100!=0 or y%400==0 ){
            cout<<"es un año bisisesto";
    }
        else{
            cout<<"no es un año bisiesto";
        }
    
    return 0;
}