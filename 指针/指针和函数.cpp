#include <iostream>
using namespace std;
//两个数字进行交换  （值传递）
    void swap01(int a,int b) {
        int temp=a;
        a=b;
        b=temp;
    }
//地址传递
void swap02(int *p1,int *p2) {
        int temp =*p1;
        *p1 =*p2;
        temp=*p2;
    }
int main () {
    //利用指针作函数参数，可以修改实参的值
    //1.值传递
    int a=10;
        int b=20;
        //swap01(a,b);
   //2.地址传递
        swap02(&a,&b);
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;


        system("pause");
    return 0;
}