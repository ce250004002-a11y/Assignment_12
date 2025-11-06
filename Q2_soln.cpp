#include <iostream>
#include <string>
using namespace std;


class Complex{
    public:
    double real;
    double imag;
    
    Complex(){
        this->real = 0;
        this->imag = 0;
    }
    Complex(double real){
        this->real = real;
        this->imag = 0;
    }
    Complex(double real,double imag){
        this->real = real;
        this->imag = imag;
    }
    
    void view(){
        cout<<"Complex number is : "<<real<<" + "<<imag<<" i"<<endl;
    }
    
};

int main() {
    double real, imag;
    string answer,type;
    answer = "y";
    do{
        cout<<"Do you wanna enter a complex number\nEnter yes(y) or no(n): ";
        cin>>answer;
        if(answer == "n"){
            cout<<"No complex number recorded !!";
            break;
        }
        cout<< "Enter:\n 'r' if the complex only contains real.......\n'i' if the complex only contains imaginary.......\n'ri' if it contains both real and imaginary..........\n'N' if it doesn't contains real as well as imaginary part.....\nEnter your response : ";
        cin>>type;
        if(type == "r"){
            cout<<"Enter the real part: ";
            cin>>real;
            Complex c1(real);
            c1.view();
        }
        else if(type == "i"){
            cout<<"Enter the imaginary part: ";
            cin>>imag;
            Complex c2(0,imag);
            c2.view();
        }
        else if(type == "ri"){
            cout<<"Enter the real part: ";
            cin>>real;
            cout<<"Enter the imaginary part: ";
            cin>>imag;
            Complex c3(real,imag);
            c3.view();
        }
        else if(type == "N"){
            Complex c4;
            c4.view();
        }
    }while(answer == "y");

    return 0;
}
