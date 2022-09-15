#include <string>
#include <iostream>
using namespace std;

class MotorVehicle {
    private:
    string make;
    string fuellType;
    int year0fManufacture;
    string color;
    int engineCapacity;

    public:
    MotorVehicle::MotorVehicle(std::string _make,std::string _fuellType, int _year0fManufacture, std::string _color,int _engineCapacity) :
    make{_make}, fuellType{_fuellType}, year0fManufacture{_year0fManufacture},
    color{_color},engineCapacity{_engineCapacity}{
    }

    //establecemos valores a los atributos 
    void setmake(string _make){
         make = _make;
    }
    void setfuellType(string _fuellType){
        fuellType = _fuellType;
    }
    void setyear0fManufacture(int _year0fManufacture){
        year0fManufacture = _year0fManufacture;
    }
    void setcolor(string _color){
        color = _color;
    }
    void engineCapacity(int _engineCapacity){
        engineCapacity = _engineCapacity
    }
    //mostrar la inf que tiene almacenadas las variables

    string getmake(){
        return make;
    }
    string getfuellType(){
        return fuellType;
    }

    int getyear0fManufacture(){
        return year0fManufacture;
    }

    string color(){
        return color;
    }

    int engineCapacity(){
        return engineCapacity;
    } 

    void displayCarDetails(){
        cout<<"make: "<<make<<endl;
        cout<<"setfuellType: "<<setfuellType<<endl;
        cout<<"setyear0fManufacture: "<<setyear0fManufacture<<endl;
        cout<<"color: "<<color<<endl;
        cout<<"engineCapacity: "<<engineCapacity<<endl;

    }

}