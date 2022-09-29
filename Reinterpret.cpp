#include <iostream>
using namespace std;
class Base
{
public:
    void fun1()
    {
        cout<<"Fun1 Base"<<endl;
    }
};
class Derived
{
public:
    void fun2()
    {
        cout<<"Fun2 Derived"<<endl;
    }
};
int main()
{
    Derived *d=new Derived();
    Base *b=reinterpret_cast<Base*>(d);
    b->fun1();
}
