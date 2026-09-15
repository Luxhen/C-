//跳过本次循环 继续执行下一次循环
#include <iostream>
#include <ostream>
#include<stdio.h>
    using namespace std;
    int main()
    {
        for (int i=0;i<=100;i++)
        {
            //奇数输出，偶数不输出
            if (i%2==0)
            {
                continue; // 可以筛选条件，执行到此就不在向下执行
                //break会退出循环 continue不会。他俩性质不一样。
                //break就是直接退出 coninue是跳过本次循环继续往下执行
            }
            cout<<i<<endl;
        }

        return 0;
    }