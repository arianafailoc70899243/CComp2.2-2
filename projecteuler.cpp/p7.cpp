//Al enumerar los primeros seis números primos: 2, 3, 5, 7, 11 y 13, podemos ver que el sexto primo es 13.

//¿Cuál es el número primo 10 001?
#include <iostream>

using namespace std;

int main() {
    int cont = 0;
    int i = 1;
    int num = 0;
    while(cont<10001){
        int div = 0;
        for(int j = 1; j<=i ;j++) {
            if(i%j==0){
                div++;
            }
        }
        if (div==2){
            num = i;
            cont++;
        }
        i++;
    }
    cout<<"el primo es "<<num<<endl;

return 0;

}