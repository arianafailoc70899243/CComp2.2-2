#ifndef __DYNAMICINTARRAY_H__
#define __DYNAMICINTARRAY_H__
#include "point.h"

class DynamicIntArray {
        int size;
        Point*data;
    public:
        DynamicIntArray();
        DynamicIntArray(const int arr[], int size);
        DynamicIntArray(const DynamicIntArray &o);

        int getSize() const;
        void print() const;

        void push_back(Point elem);//cambio las variables de tip int a point
        void insert(Point elem, int pos);
        void remove(Point pos);
        ~DynamicIntArray();
};

#endif
