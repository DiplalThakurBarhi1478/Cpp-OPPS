#include<iostream>

using namespace std;

class Teacher{
public:
    string name;
    string department;
    string subject;
    double salary;

    // parameterized constructor
    Teacher(string name, string department, string subject, double salary){
        this-> name = name;
        this-> department = department;
        this-> subject = subject;
        this->salary = salary;
    }


    //copy Construcot
    Teacher(Teacher& origObject){  // pass by referencing : this means it passes the original object with the different name
        cout << "This is a custom copy constructor" << endl;
        this->name = origObject.name;
        this->department = origObject.department;
        this->subject = origObject.subject;
        this->salary = origObject.salary;
    }


    void getInfo(){
        cout << name << endl;
        cout << department << endl;
        cout << subject << endl;
        cout << salary << endl;
    }
};

int main(){

    Teacher t1("Diplal", "Computer Science", "Computer", 25000);
    
    Teacher t2(t1); // this is custom copy constructor
    
    t2.getInfo();
    return 0;
}


// copy constructor means copying one object into another.

// There are two types of constructor
// 1. shallow  copy constructor
// 2. deep copy constructor