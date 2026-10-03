#include<iostream>
#include<string>

using namespace std;

class Student{
public:
    string name;
    double* cgpaPtr;

    // creating a constructor
    Student(string name, double cgpa){
        this->name = name;
        cgpaPtr = new double; // the varialbe pointing to the memory not the value
        *cgpaPtr = cgpa;  // dereferencing the pointer to store the value
    }

    // creating a copy constructor
    Student(Student& origObject){
        cout << "This is a custome copy constructor" << endl;
        this->name = origObject.name;
        this->cgpaPtr = origObject.cgpaPtr;
    }

    void getInfo(){
        cout << "Name : " << name << endl;
        cout << "cgpa : " << *cgpaPtr << endl;
    }
};

int main(){
    Student s1("Diplal", 3.96);
    Student s2(s1);                // Diplal     3.96

    s1.getInfo(); // this copies the exactly the same object of the first object.

    *(s2.cgpaPtr) = 3.99;         // we are making change to the student two not the first but we see change in the first one.
    s1.getInfo();                 // Diplal      3.99

    return 0;
}

// The reason all this is :
//1.  dynamic memory allocation, 
//2. stored in heap memory, 
//3. this is also the concept of shallow copy constructor.
//4. Even teh default copy constructor give the the same issue


// Explanation:
// both object the origianal and the copy object both points to the same memory location when change made to one that means the 
// change in both of them.