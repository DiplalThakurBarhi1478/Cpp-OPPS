// this is function overloading...

#include<iostream>
#include<string>

using namespace std;

class Print{
public:
    void sum(int a, int b){
        cout << "Integers sum : "<< a + b << endl;
    }

    void sum(double a, double b){
        cout << "Double sum : "<< a + b << endl;
    }

    void sum(float a, float b){
        cout << "Float sum : " << a + b << endl;
    }
};

int main(){

    Print p1;
    p1.sum(5, 7);  // providing integer type

    p1.sum(5.8, 3.5); // providing float type.\

    return 0;

}