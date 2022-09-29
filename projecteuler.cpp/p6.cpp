//Por tanto, la diferencia entre la suma de los cuadrados de los diez primeros números naturales y el cuadrado de la suma es .

//Encuentra la diferencia entre la suma de los cuadrados de los primeros cien números naturales y el cuadrado de la suma.

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    unsigned long long sumedCuadrados= 0;
    unsigned long long suma= 0;
    unsigned long long diferencia = 0;
    for(unsigned long long i = 1; i<=100;i++){
        sumedCuadrados+= pow(i,2);
        suma+=i;

    }
    diferencia = pow(suma,2) - sumedCuadrados ;
    cout<<"La diferencia es "<<diferencia<<endl;
return 0;
}