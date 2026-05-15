//bool:
//  #include <iostream>
//  using namespace std;
//  int main (){
// // bool 占位符1，
// //true :真
//    bool flag=true;
//    cout<<flag<<endl; 
//    // false:假
//       flag=false;
//       cout<<flag<<endl;

//       cout<<"WF"<<sizeof(bool)<<endl;
//     return 0;
//  }




// #include <iostream>
// using namespace std;
// int main (){
// //整形：
// int a =0;
// cout<<"请改这个变量:"<<endl;
// cin>>a;
// cout<<"a的值是="<<a<<endl;

// //浮点型：
// float f=3.14f;
// cout<<"请给变量赋值："<<endl;
// cin>>f;
// cout <<"="<<f<<endl;

// //字符型：
// char ch='a';
// cout<<"请给变量赋值："<<endl;
// cin>>ch;
// cout<<"="<<ch<<endl;

// //字符串型：
// string str="hello";
// cout<<"请给变量赋值："<<endl;
// cin>>str;
// cout<<"="<<str<<endl;

// //布尔型：
// bool flag=false;
// cout<<"请给布尔flag赋值:"<<endl;
// cin>>flag;
// cout<<"="<<flag<<endl;
//    return 0;
// }

//做加减
// #include <iostream>
// using namespace std;
// int main (){
//   int a=10;
//   int b=20;

//   cout <<a+b<<endl;



//    return 0;
// }


   // #include <iostream>
   // using namespace std;
   // int main (){

   //    int a=30;
   //    int b=20;

   //    cout<<a+b<<endl;
   //    cout<<a-b<<endl;
   //    cout<<a/b<<endl;
   //    cout<<a*b<<endl;

   //    int c=10;
   //    int d=20;
   //    cout<<c/d<<endl;

   //    double a1=0.5;
   //    double b2=0.22;
   //    cout<<a1/b2<<endl;
   //    return 0;
   // }

   //取余
//    #include <iostream>
//    using namespace std;
//    int main (){
// //10%3
//       int a1=10;
//       int b1=3;

//       cout<<a1%b1<<endl;
// //10%20
//       int a2=10;
//       int b2=20;
//       cout<<a2%b2<<endl;

//       //两个零是不可以做取模运算的
//       return 0;
//    }


// #include <iostream>
// using namespace std;
// int main (){
// //后置++ 后加+1
// int a=10;
// a++;
// cout<<"a="<<a<<endl;
// //前置++ 前+1
// int b=10;
// ++b;
// cout<<"b="<<b<<endl;
// //后++
// int a1=10;
// int b1=a1++*10;
// cout <<"a1="<<a1<< endl;
// cout <<"b1="<<b1<< endl;

// //前
// int c1=10;
// int d=++c1*10;
// cout<<c1<<endl;
// cout<<d<<endl;
//    return 0;
// }


// #include <iostream>
// using namespace std;
// int main (){

//    // =
//    int a=10;
//    a=100;
//    cout <<"a"<<a<<endl;

//    //+=
//    int a1=10;
//    a1+=2; //10+2=12
//    cout <<"a1="<<a1<<endl;
//    // -=
//    int a3=10;
//    a3-=2;
//    cout<<"a3="<<a3<<endl;

//    // *=
//    int b=10;
//    b*=2;
//    cout<<"b="<<b<<endl;

//    // /=

//    int b1=10;
//    b1/=2;
//    cout<<"b1="<<b1<<endl;

//    //%=
//    int b2=10;
//    b2%=2;
//    cout<<"b2="<<b2<<endl;
//    return 0;
// }


//#include <iostream>
//using namespace std;
//int main() {
//
//    int a = 10;
//    int b = 20;
//
//    cout << (a == b) << endl;
//
//    return 0;
//}


#include <iostream>
using namespace std;
int main() {

	cout << "世人都晓神仙好" << endl;
	int mask = 0;
	cin >> mask;

	switch (mask) {
	case 1: {
		cout << "唯有功名忘不了" << endl;
		cout << "古今将相在何方" << endl;
		cout << "荒冢一堆草没了" << endl;
		break;

	}
	case 2: {
		cout << "只有金银忘不了" << endl;
		cout << "终找只恨聚无多" << endl;
		cout << "及到多时眼闭了" << endl;
		break;
	}

	}
	return 0;
}