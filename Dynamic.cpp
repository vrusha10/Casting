#include <iostream>

using namespace std;
class A
{
public:
     virtual void fun1()
    {
        cout<<"Fun1 A"<<endl;
    }
};
class B:public A
{
public:
    void fun1()
    {
        cout<<"Fun1 B"<<endl;
    }
};
int main()
{
     A *a=dynamic_cast<A*>(new B);
     if(a){
          a->fun1();
          cout<<"Valid A"<<endl;
     }
     B *b=dynamic_cast<B*>(new A);
     if(b){
          b->fun1();
          cout<<"Valid B"<<endl;
     }
}
