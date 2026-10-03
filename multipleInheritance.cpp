#include<iostream>
#include<string>

using namespace std;

class Vehicle{                  // Base class 1
public:
    string name;
    string color;
    double plateNumber;

};

class car {     // Base class 2
public:
    double speedLimit;

};

class Toyota: public car, public Vehicle{      // child class which inherit from boht base class
public:
    int size;

};

int main(){

    Toyota t1;
    t1.name = "xyz";
    t1.speedLimit = 120;
    t1.size = 20;

    cout << t1.name << endl;
    cout << t1.speedLimit << endl;
    cout << t1.size << endl;

    return 0;
}