#include <iostream>
#include <string>
using namespace std;


class Car{
    public:
    string brand;
    double price;
    
    Car(double price,string brand){
        this->price = price;
        this->brand = brand;
    }
    
    void view(){
        cout<<"Car is : "<<brand<<" having price :  "<<price<<endl;
    }
    
};

int main() {
    Car car1(25000.00, "Honda Civic");
    Car car2(48599.99, "Tesla Model 3");
    car1.view();
    car2.view();

    return 0;
}
