    #include <iostream>
    using namespace std;
    int main ()
    {
        int arr[9]={4,2,8,0,5,7,1,3,9,};

        //开始冒泡排序
        //每次循环都减一 起始是9个，每轮都减一。
        for (int i=0;i<9-1;i++)
        {
            //内层循环对比 次数=元素个数-当前轮数-1
            for (int j=0;j<9-i-1;j++)
            {
                //如果第一个比第二个大 数字交换
                if (arr[j]>arr[j+1])
                {
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
        cout<<"排序后："<<endl;
        for (int i=0;i<9;i++)
        {
            cout<<arr[i]<<endl;
        }
        return 0;
    }