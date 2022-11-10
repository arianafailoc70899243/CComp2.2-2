#include <iostream>
#define __POINT.H__
using namespace std;

class Point{
    private:
        int x, y;
    public:
        Point(int _x= 0 , int _y= 0) : x(_x) , y(_y){}

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
    void print ()const{
        cout<<"("<<x<<","<<y<<")"<<endl;
    }

    
    };
