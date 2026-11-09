#include <iostream>
using namespace std;
int main() {
//指针所见的内存大小
    int a=10;
    // int *p=&a;
    // p=&a;

    int *p=&a;//这样是直接明了的
    //在32位操作系统下，指针是占四个字节大小，不管是什么数据类型
    //在64位操作系统下，指针是占8个字节空间大小
    cout<<"sizeof(int*)="<<sizeof(p)<<endl;
    cout<<"sizeof(int*)="<<sizeof(float*)<<endl;
    cout<<"sizeof(int*)="<<sizeof(double*)<<endl;
    cout<<"sizeof(int*)="<<sizeof(int*)<<endl;
system("pause");
    return 0;
}