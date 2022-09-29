#include <iostream>
using namespace std;

int main(){
    int array [4]= {21,34,56,78}; //forma 1
    int array[4]; //forma 2
    array[0] =10;
    array[1] = 5;
    array[2] = 4;
    array[3] = 8;

    for(int i= 0 ; i<4 ; i++){
        cout<<array[i]<<endl;
    }

    int array [4];
    cout<<"ingrese 4 numeros: "<<endl;

    for(int i = 0; i<4 ; i++){
        cout<< " "<< array[i];
        cout<< endl;
    }
}


