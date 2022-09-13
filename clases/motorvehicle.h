#include <string>
#include <iostream>
using namespace std;

class MotorVehicle {
    private:
    std::string make;
    std::string fuellType;
    int year0fManufacture;
    std::string color;
    int engineCapacity;

    public:
    MotorVehicle::MotorVehicle(std::string _make,std::string _fuellType, int _year0fManufacture, std::string _color,int engineCapacity){
    make{_make}, fuellType{_fuellType}, year0fManufacture{_year0fManufacture},
    color{_color},engineCapacity{_engineCapacity};

    }

    //método modificador
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
    //metodo de acceso

    string getmake(){
        return make;
    }
    string getsetfuellType(){
        return setfuellType;
    }

    int setyear0fManufacture(){
        return setyear0fManufacture;
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