#include <iostream>
using namespace std;
//两个数字进行交换  （值传递）
    void swap01(int a,int b) {
        int temp=a;
        a=b;
        b=temp;
    }
int main () {
    //利用指针作函数参数，可以修改实参的值
    //1.值传递
    int a=10;
        int b=20;
        swap01(a,b);
        cout<<"a="<<a<<endl;//没弄完从这开始
        system("pause");
    return 0;
}