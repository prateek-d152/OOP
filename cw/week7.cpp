#include <iostream>
using namespace std;

class Shape{
    public: 
        double calculateArea(){
            return 0;
        }
};
class Rectangle: public Shape{
    public: 
        int height;
        int width;

};
