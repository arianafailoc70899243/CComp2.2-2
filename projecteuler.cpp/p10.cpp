//La suma de los números primos por debajo de 10 es 2 + 3 + 5 + 7 = 17.

//Encuentra la suma de todos los números primos por debajo de dos millones.
#include <iostream>

using namespace std;

int main(){
    unsigned long long total= 0;
    for(unsigned long long i=0;i<2000000;i++){
        unsigned long long cont=0;
        for(unsigned long long j=1; j<=i; j++){
            if(i%j==0)cont++;

        }
        if(cont==2)total += i;
    }
    cout<<"el total "<<total<<endl;

return 0;

}
