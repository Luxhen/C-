    #include <iostream>
#include <string> //string要有头文件 一定要有头文件 string
    using namespace std;
    //1.创建学生数据类型 包括：（姓名 年龄 分数）
    //自定义数据的类型，一些类型集合组成的一个类型
    //语法： struct 类型名（成员列表）
    struct stuDent {
        //姓名
        string name;
        //年龄
        int age;
        //分数
        int score;
    }s3;//顺便创建变量

    //2.通过类型创建具体学生

//2.1 struct stuDent sl
//2.2 struct stuDant s2 {属性}
//2.3 在定义结构体时顺便创建结构体的变量
int main () {
//2.1 struct stuDent sl
    struct stuDent s1;
    //给属性赋值{通过一个点来访问结构体变量中的属性}
    s1.name ="张三";
    s1.age=18;
    s1.score=100;
    cout<<"姓名"<<s1.name<<"年龄"<<s1.age<<"分数"<<s1.score<<endl;

//2.2 struct stuDant s2 {...}
    struct stuDent  s2={"李四",19,0};
    cout<<"姓名"<<s2.name<<"年龄"<<s2.age<<"分数"<<s2.score<<endl;

//2.3 在定义结构体时顺便创建结构体的变量、
    s3.name ="王五";
    s3.age=18;
    s3.score=60;
    cout<<"姓名"<<s3.name<<"年龄"<<s3.age<<"分数"<<s3.score<<endl;
    return 0;
}