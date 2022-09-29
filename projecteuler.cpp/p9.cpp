//Existe exactamente un triplete pitagórico para el cual a + b + c = 1000.
//Encuentre el producto abc.
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    unsigned long long result = 0;
    for(int a = 1; a<1000;a++ ){
        for(int b =a+1 ; b<1000; b++){
            float c = sqrt(pow(a,2)+ pow(b,2));
            if(a+b+c==1000){
                cout<<a<<" "<<b<<" "<<c<<endl;
                result = a*b*c;
            }
        }
    }
    cout<<"el producto es "<<result<<endl;

return 0;

}