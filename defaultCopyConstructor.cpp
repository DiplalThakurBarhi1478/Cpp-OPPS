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

// using getInfo to print the value of the object.
    void getInfo(){
        cout << name << endl;
        cout << department << endl;
        cout << subject << endl;
        cout << salary << endl;
    }
};

int main(){

    Teacher t1("Diplal", "Computer Science", "Computer", 25000);
    
    Teacher t2(t1); // Default copy constructor made by the compiler
    
    t2.getInfo();
    return 0;
}


// copy constructor means copying one object into another.