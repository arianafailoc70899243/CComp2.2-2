#include <iostream>
#include <string>
#include "point.h"
#include "DynamicPointArray.h"

using namespace std;

DynamicIntArray::DynamicIntArray() {
    this->size = 0;
    data = new int[0];
}

DynamicPointArray::DynamicPointArray(const Point arr[], int size){
    this->size = size;
    data = new int[size];
    for(int i = 0; i < size; i++)
        data[i] = arr[i];
}

DynamicPointArray::DynamicPointArray(const  DynamicPointArray &o) {
    this->size = o.size;
    this->data = new int[o.size];
    for(int i = 0; i < size; i++)
        data[i] = o.data[i];
    }



int DynamicPointArray::getSize() const {
    return size;
}

void DynamicIntArray::print() const {
    cout << "[ ";
    for(int i = 0; i < size; i++)
    data[i].print cout  << " ";
    cout << "]" <<endl;
}

void DynamicIntArray::push_back(Point elem) {
    // 1
    int *tmp = new int[size + 1];
    // 2
    for(int i = 0; i < size; i++)
        tmp[i] = data[i];
    // 3
    tmp[size] = elem;
    // 4
    size += 1;
    // 5
    delete [] data;
    // 6
    data = tmp;
}

void DynamicIntArray::insert(Point elem, Point pos) {
    // 1
    Point *tmp = new Point[size + 1];
    // 2
    for(int i = 0, j = 0; i < size; i++, j++) {
        if( j == pos) {
            tmp[pos] = elem;
            i--;
        } else {
            tmp[j] = data[i];
        }        
    }
    // 3
    size += 1;
    // 4
    delete [] data;
    // 5
    data = tmp;
} 

void DynamicPointArray::remove(int pos) {
     int *tmp = new int[(size -1)];
                for(int i=0;i<pos;i++);
                    int tmp[1] = data[i];
                    for(int i = pos+1; i<size;i++)
                        int tmp[i-1]= data[i];
                        size[tmp-1];
                        delete[] data;
                        data = tmp;

} 

DynamicIntArray::~DynamicIntArray() {
    delete[] data;
}

