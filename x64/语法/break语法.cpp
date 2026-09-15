//跳出循环和选择结构
#include <iostream>
using namespace std;
int main() {
//
//	berak的使用时机
//
//	1.出现在switch语句中
//	cout << "请选择难度" << endl;
//	cout << "普通" << endl;
//	cout << "中等" << endl;
//	cout << "困难" << endl;
//
//	int select = 0; //创建选择结果的变量
//	cin >> select;
//
//	switch (select) {
//	case 1:
//		cout << "你选的是普通难度，敬请享受吧" << endl;
//		break;
//	case 2:
//		cout << "你选的是中等难度，敬请享受吧" << endl;
//		break;
//	case 3:
//		cout << "你选的是困难难度，敬请享受吧" << endl;
//		break;
//	}
//
//
//	2.出现在循环中
	// for (int i = 0; i <= 10; i++) {
	// 	//如果i=5 退出循环
	// 	if (i==5)
	// 	{
	// 		break;
	// 	}
	// 		cout << i << endl;
	//
	// }
//	//3.出现在循环语句中
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (j==5)
			{
				break;
			}
			cout<<" * ";
		}
		cout<<endl;
	}
	return 0;
}