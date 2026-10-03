#include<iostream>

using namespace std;

class Animal{
public:
           Animal(){
                cout << "This is non parameterized constructor" << endl;
            }
            string animalName;
            int age;
            string color;

           Animal(string animalName, int age, string color){         
             // here this pointer concept is used in the constructor of class.
           this->animalName =animalName ;
           this->age = age;
           this->color = color;
           }
          
           void getAnimal(){
                cout << animalName << endl;
                cout << age << endl;
                cout << color << endl;  
                
           }
};

int main(){
         Animal animal1;    // non parameterized constructor

         Animal animal2("Pocky", 2, "Brown"); // parameterized constructor
         animal2.getAnimal();
         return 0;
}