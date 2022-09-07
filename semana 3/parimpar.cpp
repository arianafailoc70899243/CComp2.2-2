#include <iostream>
using namespace std;

int main(){

    int num1 = 2;
    int num2 = 3;

    if( num1 %2==0){
    cout<<"ES PAR"<<endl;
    }

    else if ( num1+num2 % 2== 0){
    cout<<"La suma es par"<<endl;
    }

    else{
    cout<<"es impar"<<endl;
    }

    return 0;
}
