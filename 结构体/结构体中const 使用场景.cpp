#include <iostream>
#include <windows.h>
using namespace std;
    //******const就是防止函数体中的操作****** 只能读不能写
//sonst的使用场景
    struct Teacher {
        string name;//姓名
        int age;//年龄
        int score;//分数
    };
//将函数中的形参改为指针 可以减少内存空间，而且不会复制一个新的副本出来
    void printfStudent ( const Teacher *s) {//指针的话 .改为->
        //s->age=150;   加入sonst 之后一旦修改就会报错，可以防止我们的误操作；
        cout<<" 姓名："<<s->name<<" 年龄："<<s->age<<" 分数：" <<s->score<<endl;
    }
int main () {
    SetConsoleOutputCP(65001);
    struct Teacher s={"张三",15,78};
    //通过函数打印结构体信息
        printfStudent (&s);


        system("pause");
    return 0;
}