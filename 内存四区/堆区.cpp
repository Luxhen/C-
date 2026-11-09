#include <iostream>
using namespace std;
    void func () {
        //利用new关键字 可以将数据开辟带堆区
        int * p= new int(10);
        return p;
    }
int main () {

    //在堆区开辟数据
    int *p= func();
        cout << p << endl;
    return 0;
}