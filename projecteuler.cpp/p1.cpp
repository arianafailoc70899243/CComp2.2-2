// Si enumeramos todos los números naturales debajo de 10 que son múltiplos de 3 o 5, obtenemos 3, 5, 6 y 9. La suma de estos múltiplos es 23.
// Encuentra la suma de todos los múltiplos de 3 o 5 por debajo de 1000.

#include <iostream>

using namespace std;

int main(){
    int total= 0;
    for(int i=1; i<1000;i++){
        if(i%3 == 0 || i%5==0) {
            total += i;            
        }
    }
    cout<<"La suma de los multiplos es:  "<<total<<endl;

return 0;
}
