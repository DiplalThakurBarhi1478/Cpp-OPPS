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

    ~Student(){
        cout << "Hi, I am a destructor. I delete everything" << endl;
        delete cgpaPtr;        // USING delete key word to delete the dynmanically allocated memory to free the memory 
    }

    void getInfo(){
        cout << "Name : " << name << endl;
        cout << "cgpa : " << *cgpaPtr << endl;
    }
};

int main(){
    Student s1("Diplal", 3.96);  
    s1.getInfo();      

    return 0;
}

