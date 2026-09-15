#include <iostream>
using namespace std;
int main ()
{
    int scores[3][3]={
        {100,100,100},
        {90,50,100},
        {60,70,80}
    };
    string name[3]={"张山","李四","王五"};//最妙的一个点。做一个字符串
  // ↑  如果不能用并且报错 请加 “include <string>”这个头文件
    for (int i=0;i<3;i++)
    {
        int sum=0;//创建一个分数的总和
        for (int j=0;j<3;j++)
        {
            sum+=scores[i][j];
            // cout<<scores[i][j]<<" ";
        }
        cout<<name[i]<<"个人总分为"<<sum<<endl;
    }
    return 0;
}