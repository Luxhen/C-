#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

//语法：struct 结构体名 数组名【元素个素】={{},{},{}}
//1.定义一个结构体
struct Student {
    //名字
    string name;
    //年龄
    int age;
    //分数
    int score;
};

int main () {
    SetConsoleOutputCP(65001);
    //2. 创建一个结构体
    struct Student stuArray[3] {
        {"张三",18,100},
{"李四",38,80},
{"王五",28,89},
    };
    //3.给结构体中元素赋值
    stuArray[2].name ="赵六";
    stuArray[2].age = 20;
    stuArray[2].score = 100;

    //4.遍历整个结构数组
    for (int i=0;i<3;i++) {
        cout<<"姓名：  "<<stuArray[i].name<<" 年龄："
                                         ""<<stuArray[i].age<<" 分数： "
                                                              ""<<stuArray[i].score<<endl;
        system("pause");
    }
    return 0;
}