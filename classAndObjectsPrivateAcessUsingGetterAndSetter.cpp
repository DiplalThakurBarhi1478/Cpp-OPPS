#include<iostream>

using namespace std;

class Teacher{                          // creating class that is blue print which will be used for all teachers
private:
        double salary;

public:                                 // getting private balue in the main function using the getter and setter concept
        void setSalary(double s){
            salary = s;
           }

        void getSalary(){
            cout << salary << endl;
          } 
};

int main(){
        Teacher t1;           // creating object which has all the above properties.
        t1.setSalary(32000);
        t1.getSalary();         // printing those value store inside that object t1.
       return 0;
}

