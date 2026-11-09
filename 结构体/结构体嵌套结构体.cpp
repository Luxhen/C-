#include <iostream>
#include <string>
#include <windows.h>
//****在结构体中可以定义另一个结构体作为成员。用来解决实际问题；*******
using namespace std;
//学生结构体
struct Teacher {
    string name;//姓名
    int age;//年龄
    int score;//考试分数
};
//定义老师结构体
    struct tencher {
        int id;//教师编号
        string name;//教师姓名
        int age;//教师年龄
        struct Teacher stu;//学生
    };
int main() {
    c
    //  结构体嵌套
    //创建老师
    tencher t;
    t.id =0001;
    t.name = "老王";
    t.age =50;
    //学生
    t.stu.name ="张三";
    t.stu.age =20;
    t.stu.score =80;

    cout<<" 老师:" <<t.name<<" 老师编号: "<<t.id<<" 老师年龄:"<<t.age<<" 老师辅导的学生： "<<t.stu.name
    <<" 学生姓名： "<<t.stu .name<<" 学生年龄： "<<t.stu.age<<" 学生考试分数： "<<t.stu.score<<endl;
    system("pause");
    return 0;
}