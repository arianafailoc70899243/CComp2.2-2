
//2520 es el número más pequeño que se puede dividir por cada uno de los números del 1 al 10 sin resto.

//¿Cuál es el número positivo más pequeño que es divisible por todos los números del 1 al 20?

#include <iostream>

using namespace std;
int main(){
    unsigned long long num;
    for(unsigned long long i = 1; i<300000000;i++){
        bool divisible = true;
        for(unsigned long long j = 1; j<= 20;j++){
           if(i%j != 0){
                divisible = false;
           }
        }
        if(divisible){
            num = i;
            break;
        }
    }
    cout<<"el numero es "<<num<<endl;
return 0;
}