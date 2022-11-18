#include<iostream>
using namespace std;
class MyClass1 {
   public:
      virtual void print() {
         cout << "This is from MyClass1"<<endl;
      }
};
class MyClass2 {
   public:
      virtual void print() {
         cout << "This is from MyClass2"<<endl;
      }
};
class MyClass3: public MyClass1, public MyClass2 {
   public:
      void print() {
         cout << "This is from MyClass3"<<endl;
      }
};
int main(){
   MyClass1* a = new MyClass1;
   MyClass2* b = new MyClass2;
   MyClass3* c = new MyClass3;
   a -> print();
   b -> print();
   c -> print();
   b = dynamic_cast< MyClass2*>(a); //This cast will be failed
   if (b)
      b->print();
   else
      cout << "no MyClass2"<<endl;
   a = c;
   a -> print(); //Printing from MyClass3
   b = dynamic_cast< MyClass2*>(a); //Successfully casting is done
   if (b)
      b -> print();
   else
      cout << "no MyClass2"<<endl;
}

