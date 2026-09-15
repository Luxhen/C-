#include <iostream>
using namespace std;
int main () {

    //利用指针也能访问数组
    int arr[10]={1,2,3,4,5,6,7,8,9,10};

    cout<<arr[0]<<endl;//这是一般普通访问数组

    int *p=arr;//数组的首地址
    cout<<*p<<endl;//指针访问

    p++;//让指针向后偏移4个字节
    cout<<*p<<endl;

    int *p2=arr;//指针把数组中的数遍历一遍
    for(int i=0;i<10;i++) {
        // cout<<arr[i]<<endl;//数组的方式
        cout<<*p2++<<endl;
    }
    return 0;
}