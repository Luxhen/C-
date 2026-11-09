#include <iostream>
#include <string>
#include <windows.h>
using namespace std;
    //结构体指针
    struct Student {
        string name;//姓名
        int age;//年龄
        int score;//分数
    };
int main () {
    SetConsoleOutputCP(65001);
    //1.创建结构体变量
     Student s={"张三",18,100};
    //2.通过指针指向结构体变量
     Student *p=&s;
    //3.通过变量访问结构体中的数据
    //******通过结构体指针 访问结构体中的属性 需要利用到 ’ ->‘******
    cout<<" 姓名： "<<p->name<<" 年龄： "<<p->age<<" 分数： "<<p->score<<endl;
    system("pause");
    return 0;
}