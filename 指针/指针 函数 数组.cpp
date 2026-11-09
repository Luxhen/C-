#include <iostream>
using namespace std;

    //冒泡排序函数 参数1 数组的收地址 参数2 数组的长度
    void bubbleSorr(int *arr,int len){
        for (int i=0;i<len;i++) {
            for (int j=0;j<len-i-1;j++) {
                //如果j>j+1的值 交换数字
                if (arr[j]>arr[j+1]) {
                    int temp =arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
    }

    //打印数组
    void printArrsy(int *arr,int len) {
        for (int i=0;i<len;i++) {
            cout<<arr[i]<<endl;
        }
    }
int main () {
    //...描述：封装一个函数 利用冒泡进行排序 实现对整型数组的升序排列
    //1.先创建数组
    int arr[10]={4,3,6,9,1,2,10,8,7,5,};
        //数组长度（遍历一遍）
        int len=sizeof(arr)/sizeof(arr[0]);
    //2.创建函数,实现冒泡排序
    bubbleSorr(arr,len);

    //3.打印排序后的数组
    printArrsy(arr,len);

        system("pause");
    return 0;
}