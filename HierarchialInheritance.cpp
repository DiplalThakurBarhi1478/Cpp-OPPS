#include<iostream>
#include<string>

using namespace std;

class Vehicle{                  // Base class 
public:
    string name;
    string color;
    double plateNumber;

};

class car : public Vehicle {     // Derived class 1 
public:
    double speedLimit;

};

class Toyota: public Vehicle{      // Derived class 2
public:
    int size;

};

int main(){

    Toyota t1;
    t1.name = "xyz";
    t1.size = 20;

    cout << t1.name << endl;
    cout << t1.size << endl;

    car c1;
    c1.name = "abc";
    c1.speedLimit = 120;
        
    cout << c1.name << endl;
    cout << c1.speedLimit << endl;

    return 0;
}