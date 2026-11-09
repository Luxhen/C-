#include <iostream>
#include <windows.h>
using namespace std;
//常见样式：

    //1.无参无返
    void test01()
    {
        cout<<"这是无参无返"<<endl;
    }
    //2.有参无返
    void test2(int a)
    {
        cout<<"这是有参无返="<<a<<endl;
    }
    //3.无参有返
    int test3()
    {
        cout<<"这是无参有返"<<endl;
        return 1000;
    }
    //4.有参有返
    int test4(int a)
        {
            cout<<"这是有参有返"<<a<<endl;
        return 0;
            }


    int main ()
    {
        SetConsoleOutputCP(65001);

        //1.无参无返：
    test01();
        //2.有参无返：
    test2(100);
        //3.无参有返
     int num1=test3();
        cout<<"num1="<<num1<<endl;
        //4.有参有返
        int num2=test4(10000);
        cout<<"num2="<<num2<<endl;
    return 0;
}