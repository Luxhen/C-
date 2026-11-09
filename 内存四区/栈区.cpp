    #include <iostream>
    using namespace atd;
//栈区数据注意事项-不要返回局部变量的地址
void * func() {
    int a=10;//局部变量 存放在栈区，栈区的数据在函数执行完后自动释放
    return &a;//返回局部变量地址
}
    int main () {
    //接受func函数的返回值
    int * p=func();
    cout << *p << endl;
        return 0;
    }