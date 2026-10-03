#include<iostream>
#include<string>

using namespace std;

class Teacher{                          // creating class that is blue print which will be used for all teachers
public:
      string nameOfEmployee;
      string nameOfDepartment;
      string nameOfSubject;
};

int main(){
          Teacher t1;           // creating object which has all the above properties.
           t1.nameOfEmployee = "Diplal";           // giving values to the object to make those properites store
           t1.nameOfDepartment = "Computer Science";
           t1.nameOfSubject = "Computer";

          cout << t1.nameOfEmployee << endl;          // printing those value store inside that object t1.
          cout << t1.nameOfDepartment << endl;  
          cout << t1.nameOfSubject << endl;

       return 0;
}
