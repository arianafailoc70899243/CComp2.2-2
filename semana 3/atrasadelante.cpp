#include <iostream>
using namespace std;
int main(){
    int num,x,y,z,a,b;
    cout<<"Ingrese un entero de 5 digitos: "<<endl;
    cin>>num;
    x = num%100000/10000;
    y = num%10000/1000;
    z = num%1000/100;
    a = num%100/10;
    b = num%10/1;

    cout<<b<<a<<z<<y<<x<<endl;
    return 0;
}