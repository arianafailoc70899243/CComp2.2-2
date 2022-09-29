//Los factores primos de 13195 son 5, 7, 13 y 29.

//¿Cuál es el mayor factor primo del número 600851475143?
#include <iostream>

using namespace std;

int main (){
    unsigned long long num = 600851475143;
    unsigned long long fprimo = 0;
    for(unsigned long long i = 1; i <= num; i++) {
        unsigned long long contador = 0;
        for(unsigned long long j = 1; j<=i ;j++) {
            if(i%j==0){
                contador++;
            }
        }
        if (num%i==0 && contador==2){
            fprimo = i;
        }
    }
   cout<<"El factor primo mas alto es "<<fprimo<<endl;

return 0;
}