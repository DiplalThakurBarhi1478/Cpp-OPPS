#include<iostream>
#include<string>

using namespace std;

class Student{
public:
    string name;
    double* cgpaPtr;

    // creating a Original constructor
    Student(string name, double cgpa){
        this->name = name;
        cgpaPtr = new double; // the varialbe pointing to the original memory not the value
        *cgpaPtr = cgpa;  // dereferencing the pointer to store the value into the original memory
    }

    // creating a copy constructor
    Student(Student& origObject){
        cout << "This is a custome deep copy constructor" << endl;
        this->name = origObject.name;
//----------------------------------------- for deep copy constructor though copy have the same attribut if i have to change the new object we should use this concept
        cgpaPtr = new double;
        *cgpaPtr = *(origObject.cgpaPtr);
//----------------------------------------- 
    }

    void getInfo(){
        cout << "Name : " << name << endl;
        cout << "cgpa : " << *cgpaPtr << endl;
    }
};

int main(){
    Student s1("Diplal", 3.96);
    Student s2(s1);               

    s1.getInfo();                  

    *(s2.cgpaPtr) = 3.99;
    s2.name = "Rahul";  

    s1.getInfo();// s1 does not change
    s2.getInfo();//  s2 only changes its values          

    return 0;
}

