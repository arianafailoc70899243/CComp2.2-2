#include <iostream>
using namespace std;

int main(){
    int a = 3;
    int b = 4;
    int c = 2;

    if (a%b== 0){
        cout<<a<<" es divisible entre "<<b<<endl;
    }
    
    else if (a%c== 0){
        cout<<a<<" es divisible entre "<<c<<endl;
    }

    else{
        cout<<" no son divisibles "<<endl;
    }

    return 0;
}