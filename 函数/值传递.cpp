#include <iostream>
using namespace std; //如果形参发生，并不会影响实参

//如果不需要返回值，声明可以写void
void swap(int num1,int num2)
{
    cout<<"交换前"<<endl;
    cout<<"num1:"<<num1<<endl;
    cout<<"num2:"<<num2<<endl;

    int temp=num1;
    num1=num2;
    num2=temp;

    cout<<"交换前"<<endl;
    cout<<"num1:"<<num1<<endl;
    cout<<"num2:"<<num2<<endl;
}
int main ()
{
    int a=10;
    int b=20;

    // cout<<"a="<<a<<endl;
    // cout<<"b="<<b<<endl;
    swap(a,b);
    return 0;
}