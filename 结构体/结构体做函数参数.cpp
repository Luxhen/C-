#include <iostream>
#include <windows.h>
using namespace std;   //总结：若不想在修改主函数的数据 用值传递。反之用地址传递
//定义学生体
    struct Teacher {
        string name;//姓名
        int age;//年龄
        int score;//分数
    };
//打印学生信息的函数
    //1.值传递
void printStuden1 (struct Teacher s) {
    s.age=100;
    cout<<" 子函数中 姓名：" <<s.name<<" 年龄："<<s.age<<" 分数："<<s.score<<endl;
}
    //2.地址传递
 void   printStuden2 (struct Teacher *p) {
    p->age=120;
        cout<<"子函数二 姓名："<<p->name<<" 年龄: "<<p->age<<" 分数："<<p->score<<endl;
}


int main () {
    SetConsoleOutputCP(65001);
    //结构体做函数体
        //将学生在传入到一个参数中，打印到学生身上的所有信息     <------任务目的
    //创建结构体变量
    struct Teacher s;
    s.name ="王二";
    s.age =18;
    s.score =90;

    printStuden1 (s);
    printStuden2 (&s);
    cout <<" 打印函数 姓名：" <<s.name<<" 年龄：" <<s.age<<" 成绩："<<s.score<<endl;
    return 0;
}