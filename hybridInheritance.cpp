#include<iostream>
#include<string>

using namespace std;

class Vehicle{                  // Base class
public:
    string name;
    string color;
    double plateNumber;

};

class car : public Vehicle{     // Derived class
public:
    double speedLimit;

};

class Toyota: public car{      // Derived class
public:
    int size;

};

class Bus : public Vehicle{
public:
    int noOfSeats;
};

int main(){

    cout << "This is multiple level inheritance" << endl;
    Toyota t1;
    t1.name = "xyz";
    t1.speedLimit = 120;
    t1.size = 20;

    cout << t1.name << endl;
    cout << t1.speedLimit << endl;
    cout << t1.size << endl << endl;

    cout << "This is again the inheritance from the base class." << endl;
    Bus b1;
    b1.name = "Barahi";
    b1.color = "Yellow";
    b1.noOfSeats = 40;

    cout << b1.name << endl;
    cout << b1.color << endl;
    cout << b1.noOfSeats << endl;

    return 0;
}