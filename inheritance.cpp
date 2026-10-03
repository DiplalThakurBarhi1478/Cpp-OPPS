#include<iostream>
#include<string>

using namespace std;

class Vehicle{                  // Base class
public:
    string name;
    string color;
    double plateNumber;

    Vehicle(string name, string color, double plateNumber){
        this->name = name;
        this->color = color;
        this->plateNumber = plateNumber;
    }
};

class car : public Vehicle{     // Derived class
public:
    double speedLimit;

    // Important
    
    car(string name, string color, double plateNumber, double speedLimit): Vehicle(name, color, plateNumber){
        this->speedLimit = speedLimit;
    }

    void getInfo(){
        cout << "Name : " << name << endl;
        cout << "Color : " << color << endl;
        cout << "Plate Number : " << plateNumber << endl;
        cout << "Speed Limit : " << speedLimit << endl;
    }
};

int main(){
    car c1("Mahindra", "Green", 23234, 120);

    c1.getInfo();              // calling the function to get the output of all the stored data.

    return 0;
}