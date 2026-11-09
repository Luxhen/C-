//我本人极其不推荐用“goto” 它会使程序乱套
//goto:可以无条件的转跳语句
#include <iostream>
using namespace std;
int main ()
{
    //goto语句

    cout <<"1.xxxx"<< endl;
    cout <<"2.xxxx"<< endl;
    goto sum;
    cout <<"3.xxxx"<< endl;
    cout <<"4.xxxx"<< endl;
    sum:
    cout <<"5.xxxx"<< endl;

    return 0;
}