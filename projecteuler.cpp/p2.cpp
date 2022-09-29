//Al considerar los términos en la sucesión de Fibonacci cuyos valores no superan los cuatro millones, encuentre la suma de los términos de valor par.
#include <iostream>
using namespace std;

int main(){
    int total=0;
    int num1= 1,num2 = 2, res = num1 + num2;
        total += 2;
    while (res<4000000) {
        if(res%2==0){
            total += res;
        }      
        //cout<<c<<endl;
        num1 = num2;
        num2 = res ;
        res = num1+num2;
    }
    cout<<"La suma de los numeros fibonaccin es:  "<<total<<endl;

 return 0;
}
