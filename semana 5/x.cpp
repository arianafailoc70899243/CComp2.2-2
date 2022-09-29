#include <iostream>
#include <point.h>

using namespace std;

int suma(int a , int b){
    return a+b;
}
void imprimirNum(int a){
    cout <<"el numero es: "<<endl;
}

void imprimirPoint(Point p){
    cout<<"(" << p.getX() << ";" << p.getY() << ")"<< endl;
}
void modificarPoint(int _x, int _y, Point p){
    p.setX(_x);
    p.setY(_y);
}

int main(){
    int result = suma(5,6); //correcto
    cout<< suma(5,6) <<endl; //correcto
    imprimirNum(6);
    Point p1(5,6);
    imprimirPoint(p1);
    modificarPoint(7,8,p1);
    imprimirPoint(p1);
    return 0;

    //error//int var = imprimirNum (5);
    //cout <<imprimirNum(5); //error


}