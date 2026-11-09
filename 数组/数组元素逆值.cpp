#include <iostream>
using namespace std;
int main ()
{
    //数组元素逆置
    //1.创建数组
    int arr[5]={1,2,3,4,5};

    //实现逆置
    //2.记录起始下标位置
    int start=0;//起始下标
    int end=sizeof(arr)/sizeof(arr[0]-1);//结束下标


    while (start<end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;


        start++;
        end--;
    }

    //输出:
    cout<<"逆置后的结果"<<endl;
    for (int i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;
}