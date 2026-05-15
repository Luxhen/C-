// #include <iostream>
// using namespace std;
// int main (){
// // if 判断
// int sum=0;
// cout<<"请输入你的分数："<<endl;
// cin>>sum;

// if(sum>600){
//     cout<<"恭喜你 ，你被录取了"<<endl;
// }else{
//     cout<<"非常遗憾 你没被录取"<<endl;
// }

//     return 0;
// }



// #include <iostream>
// using namespace std;
// int main (){

//     //大于600是一本，大有500是二本 大于450是三本 300以下是大专

//     int sum=0;
//     cout<<"请输入你的分数"<<endl;
//     cin>>sum;

//     if(sum>600){
//         cout<<"恭喜你 考上了一本"<<endl;
//     }else if (sum>500){

//         cout<<"恭喜你 考上了二本"<<endl;
//     }else if (sum>450){

//         cout<<"恭喜你 考上了三本"<<endl;
//     }else if (sum>300){
//         cout<<"大专"<<endl;
//     }


//     return 0;
// }


// #include <iostream>
// using  namespace std;
// int main (){

// int sum=0;
// cout<<"请输入你的分数："<<endl;
// cin>>sum;

// if(sum>700){

//     cout<<"恭喜你 一本大学"<<endl;
//     if(sum>720){
//         cout<<"985 211任选"<<endl;
//     }
// }else if(sum>500){
//     cout<<"恭喜你，二本大学"<<endl;
//     if(sum>540){
//         cout<<"211 一本或二本大学"<<endl;
//     }
// }else if (sum>300){
//     cout<<"三本大学"<<endl;
// }

//     return 0;
// }

// #include <iostream>
// #include <windows.h>
// using namespace std;
// int main (){
//     SetConsoleOutputCP(65001);//不会乱码

// int a,b,c;
// cout<<"请输入三只小猪的重量"<<endl;
// cin>>a>>b>>c;

// if(a>b&&a>c){

//     cout << "a最大" << endl;

// }
// else if (b > a && b > c) {

//     cout << "b最大" << endl;
// }
// else if (c > a && a > b) {
//     cout << "c最大" << endl;
// }
// system("pause");
//     return 0;
// }



//？：三目运算符
// #include <iostream>
// #include <windows.h>
// using namespace std;
// int main (){
//     SetConsoleCP(65001);

// int a=10,b=20,c=30;

// c=(a>b?a:b);
// cout<<"c="<<c<<endl;

// c=(a>b?a:b)=100;
// cout<<"c="<<c<<endl;


//     return 0;
// }




//switch语言
// #include <iostream>//电影评分：10分 很好。7~9分 一般。0~6分 很差。
// #include <windows.h>
// using namespace std;
// int main (){
// SetConsoleCP(65001);

//     cout<<"请输入您对电影的评价"<<endl;
//     int sum;
//     cin>>sum;
//     cout<<"分数是"<<sum<<endl;


//         switch(sum){
//             case 10:
//                 cout<<"这是经典电影"<<endl;
//                 break;
//             case 9:
//                 cout<<"这是一般的电影"<<endl;
//                 break;
//             case 8:
//                 cout<<"这是一般电影"<<endl;
//                 break;

//             default:
//             cout<<"这是烂片"<<endl;
//             break;
//         }


//     return 0;
// }


//while循环
// #include <iostream>
// #include <windows.h>
// using namespace std;
// int main (){
//     SetConsoleCP(65001);

//     int num=0;
//     while (num<10){

//         cout<<num<<endl;
//         num++;
//     }

//     return 0;
// }



// #include <iostream>
// using namespace std;
// #include <ctime>//time系统时间头文件包含
// int main (){
//     //利用种子生成随机数 <必须写新的头文件>
//     srand((unsigned int)time(NULL));

//     //随机生成数
//     int num = rand() % 100+1;  //生成0~99的随机数
//     // cout<<num<<endl;
//     //玩家进行的猜测
//     int val =0; //玩家输入的数据
//     while (1){

//     //判断玩家的猜测
//     cin >> val;
//     if (val>num){
//         cout<<"猜测过大"<<endl;
//     }else if(val<num){
//         cout<<"你猜错了"<<endl;
//     }else {
//         cout<<"你猜对了"<<endl;
//         break; //关键字作用：结束循环
//     }
// }
//     return 0;
// }

//do while循环 1~9打印
// #include <iostream>
// using namespace std;
// int main (){
//     int sum=0;


//     do{
//         cout<<++sum<<endl;
//         //sum++;
//     }while (sum<10);
//     return 0;
// }


//水仙花
// #include <iostream>
// using namespace std;
// int main (){
//     int mask=100;

//     do{
//         int a,b,c=0;
//         a=mask%10;
//         b=mask/10%10;
//         c=mask/100;

//         if (a*a*a+b*b*b+c*c*c == mask){
//         cout<<mask<<endl;
//     }
//         mask++;
//     }while (mask<1000);
//     return 0;
// }

//for
    // #include <iostream>
    // using namespace std;
    // int main (){
    // int i;
    //     for (i=0;i<10;i++){
    //         cout<<i<<endl;
    //     }

    //     return 0;
    // }



    //敲桌子
//#include <iostream>
//using namespace std;
//int main() {
//    //先输出1-100；
//    int i;
//    for (i = 1; i <= 100; i++) {
//        //7的倍数 个位有7 十位有7……都显示敲桌子
//        if (i % 7 == 0 || i % 10 == 7 || i / 10 == 7) {
//            cout << "敲桌子" << endl;
//        }
//        else { //若没有 直接显示数字
//            cout << i << endl;
//        }
//    }
//    return 0;
//}


//公鸡和母鸡和小鸡。公鸡一只5块 母鸡一只3块 小鸡3只价值1块。
//现在用100元买100只鸡：问公鸡母鸡小鸡各多少只
 //#include <iostream>
 //using namespace std;
 //int main (){
 //    int i, j;
 //    for (i = 0; i >= 20; i++) {//公鸡
 //        for ( j = 0; j >= 33; j++) {//母鸡
 //             int ci = (100 - i*5 - j*3)/3;//小鸡
 //             if (ci % 3 == 0 && (5 * i + 3 * j + ci / 3) == 100) {//先算出小鸡的数量，后再把公母小鸡价格和各数量算出
 //                 cout << "公鸡" << i << "母鸡" << j << "小鸡" << ci << endl;
 //             }
 //               }
 //           }
 //       }
     

//#include<iostream>
//using namespace std;
//int main() {
//    int i, j;
//    
//        for (i = 0; i < 10; i++) {
//            for (j = 0; j < 10; j++) {
//                cout <<*<<endl;
//            }
//            cout << endl;
//        }
//       return 0;
//}

 
 