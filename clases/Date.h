#include <iostream>
#include <string>
using namespace std;

    class Date{
    private:
        int month = 0;
        int day = 0;
        int year = 0;
    public:
    Date::Date(int _month,int _day,int _year): month {_month},day{day},year {_year}{
            if(1>=_month && month<=12 ){
                cout<<"ok"<<endl;
            }
    }
//set
    void setmonth(int _month){
        month = _month;
    }
     void setday(int _day){
        month = _day;
    }
     void setyear(int _year){
        month = _year;
    }
//get
    int getmonth(){
        return month;
    }
    int getday(){
        return day;
    }
    int getyear(){
        return year;
    }

    void DisplayDate(){
        cout<<day<<"/"<<month<<"/"<<year<<endl;
    }
};
