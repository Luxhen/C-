#include <iostream>
using namespace std;
int main () {

    //指针变量指向非法的内存空间
    //***在程序中尽量避免出现野指针
    int * p=(int*)0x1100;
    cout<<*p<<endl;
    system("pause");
    return 0;
}

//空指针和野指针都不是我们申请的空间，因此不要访问