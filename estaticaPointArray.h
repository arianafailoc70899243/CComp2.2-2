#ifndef _estaticaPointArray_
#define _estaticaPointArray_
#include "point.h"

class estaticaPointArray {
        int size;
        Point *data;
    public:
        estaticaPointArray(int size);
        estaticaPointArray(const estaticaPointArray &o);

        void setAt(int index, Point value);
        Point getAt(int index) const;
        int getSize() const;
        void print() const;

        ~estaticaPointArray();
};
