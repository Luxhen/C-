//1.数据类型 数组名[数组长度];
//2.数据类型 数组名[数组长度]={值1，值2，值3……}；
//3.数据类型 数组名[  ]={值1，值2……}
#include <iostream>
using namespace std;
int main()
{
    //一，
    // int arr[5];
    // arr[0]=10;
    // arr[1]=20;
    // arr[2]=30;
    // arr[3]=40;
    // //访问数据元素
    // cout<<arr[3]<<endl;


    //二,
        int arr2[5]={10,20,30,40,50};//如果在初始化数据的时候，没有全部填写完 会用0填补剩余数据
        // cout<<arr2[0]<<endl;
        // cout<<arr2[1]<<endl;
        // cout<<arr2[2]<<endl;
        // cout<<arr2[3]<<endl;
    //用循输出数组中的元素：
    // for (int i=0;i<5;i++)
    // {
    //     cout<<arr2[i]<<endl;
    // }


    //三，
    int arr3[]={90,80,70,60,50,30,20,}; //定义数组的时候必须有初始的长度
    for (int i=0;i<9;i++)
    {
        cout<<arr3[i]<<endl;
    }
    return 0;
}