// Some examples:
// 1. Constructor overloading --> this is in this file
// 2. Function overloading
// 3. Operator overlaoading


// having same name for the constructors

#include<iostream>
#include<string>

using namespace std;

class Student{
public:

    string name;

    Student(){
        cout << "It is a non parameterized constructor" << endl;
    }

    Student(string name){
        this->name = name;

        cout << "This is a parameterized constructor" << endl;

        cout << name << endl;
    }

};

int main(){
    Student s1;              // calls the non parameterized constructor
    Student s2("Diplal");     // calls the parameterized constructor.

    return 0;

}
