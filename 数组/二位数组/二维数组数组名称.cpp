    #include <iostream>
    using namespace std;
    int main ()
    {//可以变整形
        //二维数组名称用途
        //1.可以看占用数组的空间大小
        int  arr[2][3]={
            {1,2,3},
            {4,5,6}
        };
        cout <<sizeof(arr)<<endl;//勘察整个占用空间内存
        cout<<sizeof(arr[0])<<endl;//看第一行内存占用
        cout<<sizeof(arr[0][0])<<endl;//看一个元素占用的内存空间


        cout<<sizeof(arr)/sizeof(arr[0])<<endl;//看一行占用的内存空间
        cout<<sizeof(arr)/sizeof(arr[0][0])<<endl;//看一列占用的内存空间


        //2.可以查看二维数组的首地址
        cout<<arr<<endl;///二维数组的首地址为,可以强制转换 只需要加“int”就可以直观看出
        cout<<arr[0]<<endl;//第一行的首地址
        cout<<arr[1]<<endl;//第二行的首地址
        cout<<&arr[0][0]<<endl;//第一个元素的首地址
        return 0;
    }