#include <iostream>
using namespace std;
int main () {
//三种情况：
    //const修饰指针 ————常量指针 （在指针的前面加const就是）
    //const修饰常量 ————指针常量
    //const既修饰指针 ————又修饰常量

    const int *p=&a;//<<常量指针 特点：指针的指向可以修改，但是指针的指不可以改
    int *const p=&a;//<< 指针常量、、特点：指针的指向不可以改，指针指向的值可以改
    const int * const p=&a;//<-<-既修饰指针 又修饰常量  特点：指针指向和指针指向的值都不可以改
    return 0;
}