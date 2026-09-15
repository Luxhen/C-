#include <iostream>
using namespace std;
int main ()
{
    //五只小猪称重的数组
    int arr[5]={300,350,200,400,250,};
    //找最大值
    int max=0;
    for (int i=0;i<5;i++)
    {   //如果访问的数组元素比我认定的最大值还大 更新最大值
        if (arr[i]>max)
        {
            max=arr[i];
        }

    }
    cout<<"最重的小猪体重为："<<max<<endl;
    return 0;
}