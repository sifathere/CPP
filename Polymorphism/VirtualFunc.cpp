#include<iostream>
using namespace std;

class Base {
public:
    virtual void display() {
        cout << "Base class display" << endl;
    }
};

class Derived : public Base {
public:
    void display() override {
        cout << "Derived class display" << endl;
    }
};

int main() {
    Base* basePtr;
    Derived derivedObj;
    
    basePtr = &derivedObj;
    basePtr->display();
    
    return 0;
}
