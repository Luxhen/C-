#include <iostream>
#include <windows.h>
#include <string>
#include <Ctime>
using namespace std;
//  学生的结构体
struct Student {
    string sName;//学生
    int score;//分数
};

// 老师的结构体
    struct Teacher {
        string tName;//名字
        struct Student sArray[5];//学生数组
    };

    //给老师和学生赋值的函数
void allocateSpace(struct Teacher tArray[],int len) {
    string nameSeed="ABCDE";
    //老师赋值
        for (int i=0;i<len;i++) {
            tArray[i].tName="Teacher_";
            tArray[i].tName += nameSeed[i];

            //通过循环给每名老师所带的学生赋值
            for (int j=0;j<5;j++) {
                tArray[i].sArray[j].sName="Student_";
                tArray[i].sArray[j].sName += nameSeed[j];
                tArray[i].sArray[j].score=60;
            }
        }
}
//输出打印
    void printInfo (struct Teacher tArray[],int len) {
    for (int i=0;i<len;i++) {
        cout<<" 老师的姓名：" <<tArray[i].tName<<endl;

        for (int j=0;j<5;j++) {
            cout<<"学生姓名："<<tArray[i].sArray[j].sName<<
                " 考试分数："<<tArray[i].sArray[j].score<<endl;
        }
    }
}
int main() {
    //生成随机数
    srand((unsigned)time(NULL));

    SetConsoleOutputCP(65001);


    //1.创建3名老师的数组
    struct Teacher tArray[3];
    //2.通过函数给3名老师的信息赋值，并给老师带的学生信息赋值
    int len= sizeof(tArray) / sizeof(tArray[0]);
    allocateSpace(tArray,len);
    //3.打印所有老师及所带的学生信息
    printInfo(tArray,len);
    return 0;
}
