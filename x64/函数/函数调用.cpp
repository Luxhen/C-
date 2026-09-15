    #include <iostream>
    using namespace std;
    //函数定义的时候，num1和num2并没有真实数据，只是一个形式上的参数。简称形参
    int add(int num1,int num2)
    {
        int sum=num1+num2;
        return sum;
    }

    int main ()
    {
        //main函数调用add
        int a=10;
        int b=20;

        //函数调用的语法: 函数名称(参数)
        //a和b成为 实际参数，简称实参
        int c=add(a,b);
        cout<<"c="<<c<<endl;
        return 0;
    }