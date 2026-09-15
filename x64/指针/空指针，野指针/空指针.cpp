#include <iostream>
using namespace std;
int main () {

    //指针变量指向内存中编号为0的空间
    //1.空指针用于给指针变量进行初始化
    int *p=NULL;
    //2.空针不能访问 （显示没有权限访问）》》0--255这是电脑默认要占用的内存空间
    *p=100;
    return 0;
}