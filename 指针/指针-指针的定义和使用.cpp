    #include <iostream>
    using namespace std;
    int main () {

        //1.定义指针
        int a =10;
        //2.指针定义的语法： 数据类型 * 指针变量名；
        int *p;
        //让指针记录变量A的地址
        p=&a;
        cout<<&a<<endl;//a的地址为
        cout<<p<<endl; //p的地址为

        //2.使用指针：
        //***可以通过解引用的方式来找到指针向的内存*** 指针前加一个 * 号就是解引用了。找到指针指向内存中的数据
        *p=1000;//
        cout<<"a="<<a<<endl;
        cout<<"*p="<<p<<endl;
        cout<<p<<endl;
        system("pause");
        return 0;
    }