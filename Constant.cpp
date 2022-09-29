#include <iostream>

using namespace std;
int fun(int *p)
{
    return *p+10;
}
int main()
{
    const int num=10;
    const int *ptr=&num;
    int *ptr1=const_cast<int*>(ptr);
    cout<<fun(ptr1)<<endl;
}
