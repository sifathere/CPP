#include<iostream>
using namespace std;

class Minus
{
    private:
    int num1, num2;
    
    public:
    Minus(int a = 0, int b = 0) : num1(a), num2(b) {}

    void print() 
    {
        cout<< "Difference between "<<num1<<" and "<<num2<<" = "<< num1 - num2 << endl;
    }

    Minus operator -(Minus other)
    {
        Minus temp;
        temp.num1 = num1 - other.num1;
        temp.num2 = num2 - other.num2;
        return temp;
    }
};

int main()
{
    Minus m1(10, 5);
    m1.print();
}
