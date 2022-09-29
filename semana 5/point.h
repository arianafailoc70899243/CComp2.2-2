#include <iostream>
#define __POINT.H__

class Point{
    private:
        int x, y;
    public:
        Point(int _x , int _y) : x(_x) , y(_y){}

    void setX(int _x){
        x = _x;
    }

    int getX()const{
        return x;
    }

    void setY(int _y){
        y = _y;
    }

    int getY()const{
        return y;
    }

    
    };
