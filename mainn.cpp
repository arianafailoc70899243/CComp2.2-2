#include <iostream>
#include "Point.h"

using namespace std;
/*void printArray(const Point *array, int tam){
    cout<<"["<<endl;
    for(int i=0; i<tam;i++;array++)
        array ->print();
    cout<<"]"<<endl;
}
void printArray(const Point *array, int tam){
    if(tam <= 0)
        return;
    array -> print();
    printArrayRec(++array,tam--);*/

int main() {
    Point p1(4,8);
    Point p2(12,5);
    Point p3(2,15);
    Point p4 (10,8);
    Point p5(1,4);

    Point arreglo []={p1,p2,p3,p4,p5};
    Point p6;
    DynamicPointArray da2(arreglo, 4);
    da2.print();
    DynamicPointArray da3 = da2;
    da3.print();

    da2.push_back(p5);
    da2.print();
    Point p6{7, 7};
    da2.insert(p6, 1);
    da2.print();
    Point p7{100, 100};
    da2.insert(p7, 0);
    da2.print();

    /*arreglo[0]= p1;
    arreglo[1] = p2;
    arreglo[2] = p3;
    arreglo[3] = p4;
    arreglo[4] = p5;

    Point arreglo[] = {p1,p2,p3,p4,p5};
    int tam = sizeof (arreglo) / sizeof(arreglo[0]);
    Point *ptr = &arreglo[0];
    //  Point *ptr = arreglo; son lo mismo

    for(int i = 0;i <tam; i++,ptr++)
        ptr ->print();

        //arreglo->print();

    Point *ptr = new Point(8,9);

    Point *ptr2;
    ptr2 = &p1;

    if(true) {
        Point p2{5,6};
        p2.print();
    }

    p1.print();
    ptr2->print();
    
    ptr->print();  

    delete ptr;*/
    return 0;
}