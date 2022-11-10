#include <iostream>

using namespace std;

class Point{
    public:
        Point(int _x = 0, int _y = 0):x(_x), y(_y) 
        {
            cout << "Constructor" << endl;
        }

        ~Point() {
            cout << "Destructor" << endl;
        }

        void setX(int _x){
            x = _x;
        }
        void setY(int _y){
            y = _y;
        }
        int getX() const{
            return x;
        }
        int getY() const{
            return y;
        }

        void print() const{
            cout << "(" << x << " , " << y << ")" << endl;
        }
    private:
        int x, y;
        friend ostream&operator<<(ostream&output, const Point &p){
};

inline ostream& operator <<(ostream &output, const Point &p){
    output <<"{"<<
}
        


};