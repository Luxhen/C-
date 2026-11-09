#include <iostream>
using namespace std;
//如果把定义放在了main的下面 上面要有声明 只有int（定义名就可以）；提前告诉编译器是
//定义
    int max(int a,int b) {
        return a > b ? a : b;
    }

int main ()
{
    int a=10;
        int b=20;
        cout<<max(a,b)<<endl;

    system ("pause");
    return 0;
}