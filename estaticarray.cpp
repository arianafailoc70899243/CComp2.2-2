#include <iostream>
#include "Point.h"
#include "estaticaPointArray.h"
using namespace std;
estaticaPointArray::estaticaPointArray(int size){
    data = new Point[size];
    this->size = size;
}

estaticaPointArray::estaticaPointArray(const estaticaPointArray &o){
    size = o.size;
    data = new Point[o.size];
    for (int i = 0; i < size; i++)
        data[i] = o.data[i];
}

void estaticaPointArray::setAt(int index, Point value){
    if(index >= 0 && index < size)
        data[index] = value;
}

Point estaticaPointArray::getAt(int index) const{
    if(index >= 0 && index < size)
        return data[index];
}

int estaticaPointArray::getSize() const{
    return size;
}

void estaticaPointArray::print() const{
    for(int i = 0; i < size; i++){
        data[i].print();
        cout << " ";
    }}