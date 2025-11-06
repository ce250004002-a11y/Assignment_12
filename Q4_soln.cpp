#include <iostream>


using namespace std;

class Box {
public:
    double length;
    double breadth;
    double height;

    Box() {
        this->length = 1.0;
        this->breadth = 1.0;
        this->height = 1.0;
        cout << "Default Box created (1x1x1)." << endl;
    }

    Box(double side) {
        this->length = side;
        this->breadth = side;
        this->height = side;
        cout << "Cube Box created (" << side << "x" << side << "x" << side << ")." << endl;
    }

    Box(double len, double bre, double hgt) {
        this->length = len;
        this->breadth = bre;
        this->height = hgt;
        cout << "Custom Box created (" << len << "x" << bre << "x" << hgt << ")." << endl;
    }

    void displayVolume() {
        double volume = length * breadth * height;
        
        cout << "   -> Dimensions: " << length << " x " << breadth << " x " << height << endl;
        cout << "   -> Volume: " << volume << endl;
    }
};

int main() {
    cout << "Box Constructor Overloading Demo" << endl << endl;

    Box defaultBox;
    defaultBox.displayVolume(); 
    cout << endl;

    Box cubeBox(5.0);
    cubeBox.displayVolume();
    cout << endl;

    Box customBox(2.5, 4.0, 10.0);
    customBox.displayVolume();
    cout << endl;

    cout << "--------------------------------" << endl;

    return 0;
}
