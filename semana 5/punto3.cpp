#include <iostream>
#include "point.h"
using namespace std;

void imprimirPoints(const Point arr[],const int tam){
    for(int i=0; i<tam;i++){
        arr[i]().print();
    }
}
    
int main (){
    Point p1;
    Point p2(5,4);
    Point p3(4,0);
    

    Point arr[] = {p1,p2,p3};
    imprimirPoints(arr,3);
        

}
