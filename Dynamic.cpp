#include <iostream>

using namespace std;
class A
{
public:
     void fun1()
    {
        cout<<"Fun1 A"<<endl;
    }
};
class B
{
public:
    void fun1()
    {
        cout<<"Fun1 B"<<endl;
    }
};
int main()
{
    B *b=new B();
   A *a=reinterpret_cast<A*>(b);
   a->fun1();
   b->fun1();
}
