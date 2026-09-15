//1.可以统计整个数组在内存中的长度
//2.可以获取数组在内存中的首地址
#include <iostream>
using namespace std;
int main ()
{
    //数组名的用途:
    //1.看内存的占用大小
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<"整个数组内存的占用空间"<<sizeof(arr)<<endl;
    cout<<"每个元素占用内存空间"<<sizeof(arr[0])<<endl;
    cout<<"数组中元素的个数为："<<sizeof(arr)/sizeof(arr[0])<<endl;

    //2.数组名看数组首地址：
    cout<<"数组首地址为："<<arr<<endl;//加int可强制转换十进制
    cout<<"数组中第一个元素的地址"<<arr[0]<<endl;//加int可强制转换十进制

    return 0;
}