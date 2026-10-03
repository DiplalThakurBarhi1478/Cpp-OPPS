// Definition
// The ability of an objects to take on different forms or behave indifferent ways depending on the context in which they are used.

//Types
//1. Compile time polymorphism
//2. Runt time polymorphism



// Example: /function overloading/ is an example of /compile time polymorphism./

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
