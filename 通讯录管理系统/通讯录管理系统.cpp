//封装函数显示该页面
//在main函数中调用函数
#include <iostream>
#include <string>
    using namespace std;
#define  MAX 1000 //通讯录最高能记一千人

//  联系人结构体
    struct Person {
        //姓名
        string m_name;
        //性别 1 男 2女
        int  m_Sex;
        //年龄
        int m_Age;
        //电话
        string m_Phone;
        //住址
        string m_Addr;
    };

// 通讯录结构体
    struct Addrssbboks {
        //通讯录中保存的联系人数组
        struct Person personArray[MAX];
        //通讯录中当前记录联系人个数
        int m_Size;
    };
// 添加联系人
void addPerson(Addrssbboks * addressBook) {
    //通讯录是否已满，满了不添加
    if (addressBook->m_Size==MAX) {
        cout<<"通讯录已满，无法添加"<<endl;
    }
    else {
        //添加具体联系人
        //姓名
        string name;
        cout<<"请输入姓名：" <<endl;
        cin>>name;
        addressBook->personArray[addressBook->m_Size].m_name=name;

        //性别
        cout<<"请输入性别 ："<<endl;
        cout<<"1---男"<<endl;
        cout<<"2---女"<<endl;
        int sex=0;
        while (true) {
            //如果输入的是1或者2可以退出循环，因为输入的是正确值
            //如果错误 那就重新开始
            cin>>sex;
            if (sex ==1||sex==2) {
                addressBook->personArray[addressBook->m_Size].m_Sex=sex;
                break;
            }
            cout<<"输入有误，请重新填写"<<endl;
        }
        //年龄
        cout<<"请输入年龄 :"<<endl;
        int age=0;

        while (true) {
            cin>>age;
            if (age>=0||age<=100) {
                addressBook->personArray[addressBook->m_Size].m_Age=age;
                break;
            }
            cout<<"输入有误，请重新填写"<<endl;
        }

        //电话
        cout<<"请输入联系电话: "<<endl;
        string phone;
        cin>>phone;
        addressBook->personArray[addressBook->m_Size].m_Phone=phone;

        //住址
        cout<<"请输入家庭住址"<<endl;
        string addr;
        cin>>addr;
        addressBook->personArray[addressBook->m_Size].m_Addr=addr;
        //更新通讯录中的人员个数
        addressBook->m_Size++;
        cout<<"添加成功"<<endl;

            system("pause");//请按任意键继续
            system("cls");
    }
}

//显示所有联系人
void showPerson(Addrssbboks * addressBook) {
    //判断通讯录中人数是否为0，如果不为0，提示记录为空
    //如果判断不为0，显示记录的联系人信息
    if (addressBook->m_Size==0) {
        cout<<"当前记录为空"<<endl;
    }
    else {
        for (int i=0;i< addressBook->m_Size;i++) {
            cout<<"姓名"<<addressBook->personArray[i].m_name <<"\t";
            cout<<"性别"<<(addressBook->personArray[i].m_Sex == 1?"男":"女")<<"\t";
            cout<<"年龄"<<addressBook->personArray[i].m_Age<<"\t";
            cout<<"电话" <<addressBook->personArray[i].m_Phone<<"\t";
            cout<<"住址"<<addressBook->personArray[i].m_Addr<<endl;
        }
    }
    system("pause");//按任意键继续
    system("cls");
}


    //检测联系人是否存在，如果存在 返回联系人所在数组中标方的具体位置，不返回-1
    //参数1 通讯录 参数2  对比姓名
        int isExist (Addrssbboks * addressBook,string name) {
            for (int i=0;i<addressBook->m_Size;i++) {
                if (addressBook->personArray[i].m_name==name) {
                    return i;
                }
            }
    return -1;//如果遍历结束都没有找到，返回-1
}
    //删除指定联系人
        void deletstPerson(Addrssbboks * addressBook) {
            cout <<"请输入您要删除的联系人"<<endl;
        string name;
        cin>>name;
    //ret ==-1; 未查到
    //ret !=-1;查到了
   int ret =isExist(addressBook,name);
    if (ret!=-1) {
        //查到到人，要进行删除操作
        for (int i=ret;i<addressBook->m_Size;i++) {
            //数据前移
            addressBook->personArray[i]=addressBook->personArray[i+1];
        }
        addressBook->m_Size--;//更新通讯录中的人员数
        cout<<"删除成功"<<endl;
    }
    else {
        cout<<"查无此人"<<endl;
    }
    system("pause");
    system("cls");
}


//查找联系人
void findPerson(Addrssbboks * addressBook) {
    cout<<"请输入您要查找的联系人"<<endl;
    string name;
    cin>>name;

    //判断联系人是否存在
    int ret=isExist(addressBook,name);
    if (ret!=-1) { //找到联系人
        cout<<"姓名"<<addressBook->personArray[ret].m_name<<"\t";
        cout<<"性别"<<addressBook->personArray[ret].m_Sex<<"\t";
        cout<<"年龄"<<addressBook->personArray[ret].m_Age<<"\t";
        cout<<"电话"<<addressBook->personArray[ret].m_Phone<<"\t";
        cout<<"住址"<<addressBook->personArray[ret].m_Addr<<endl;
    }
    else {
        cout<<"查无此人"<<endl;
    }
    //任意键清屏
    system("pause");
    system("cls");
}

//修改指定联系人信息
void modifyPerson(Addrssbboks * addressBook) {
    cout<<"请输入您要修改的联系人"<<endl;
    string name;
    cin>>name;

    int ret=isExist(addressBook,name);
        if (ret != -1) {//找到联系人
            //姓名
            cout<<"请输入姓名"<<endl;
            cin>>name;
            addressBook->personArray[ret].m_name=name;

            //性别
            cout<<"请输入性别"<<endl;
            cout<<"1 --- 男"<<endl;
            cout<<"2 ---女"<<endl;
            int sex=0;
            while (true) {
                cin>>sex;
                if (sex==1||sex==2) {
                    //输入正确 退出循环输入
                    addressBook->personArray[ret].m_Sex=sex;
                    break;
                }
                cout<<"输入有误,请重新输入"<<endl;
            }

            //年龄
            cout<<"请输入年龄"<<endl;
            int age=0;
            cin>>age;
            addressBook->personArray[ret].m_Age=age;

            //电话
            cout<<"请输入联系电话"<<endl;
            string phone;
            cin>>phone;
            addressBook->personArray[ret].m_Phone=phone;

            //住址
            cout<<"请输入一个家庭住址"<<endl;
            string addr;
            cin>>addr;
            addressBook->personArray[ret].m_Addr=addr;

            cout<<"修改成功"<<endl;
        }
        else {//未找到联系人
            cout <<"查无此人"<<endl;
        }
        //按任意键清屏
        system("pause");
    system("cls");
}

//清空通讯录信息
void cleanPerson(Addrssbboks * addressBook) {
    addressBook->m_Size=0;//将当期联系人人数量重设为0，做逻辑清空操作
    cout<<"通讯录"<<endl;
    //按任意键清空
    system("pause");
    system("cls");
}

//1.菜单界面
    void showMenu() {
        cout<<"*************************"<<endl;
        cout<<"*****  1.添加联系人  *****"<<endl;
        cout<<"*****  2.显示联系人  *****"<<endl;
        cout<<"*****  3.删除联系人  *****"<<endl;
        cout<<"*****  4.查找联系人  *****"<<endl;
        cout<<"*****  5.修改联系人  *****"<<endl;
        cout<<"*****  6.清空联系人  *****"<<endl;
        cout<<"*****  0.退出通讯录  *****"<<endl;
        cout<<"*************************"<<endl;
    }
int main () {

//创建一个通讯录的结构体变量
        Addrssbboks addressBook;
// 初始化通讯录中当前人员个数
        addressBook.m_Size=0;


        int select=0;//创建一个用户输入变量

    while(true) {
        //菜单的调用
        showMenu();

        cin>>select;
        switch (select) {
            case 1:     //1.添加联系人
                addPerson(&addressBook);  //利用地址传递，可以修饰实参
                break;
            case 2:  //2.显示联系人
                showPerson(&addressBook);
                break;
             case 3:
                //{
            //     //3.删除联系人
            //     cout<<"请输入删除人姓名"<<endl;
            //     string name;
            //     cin>>name;
            //     if (isExist(&addressBook,name)==-1) {     158--169是测试代码 不是最后效果
            //         cout<<"查无此人"<<endl;
            //     }
            //     else {
            //         cout<<"找到了"<<endl;
            //     }
            // }
                deletstPerson(&addressBook);
                break;

            case 4:  //4.查找联系人
                findPerson(&addressBook);
                break;
            case 5://5.修改联系人
                modifyPerson(&addressBook);
                break;
            case 6:  //6.清空联系人
                cleanPerson(&addressBook);
                break;
            case 0: //0.退出通讯录
                cout<<"欢迎下次使用"<<endl;
                system("pause");
                return 0;
                break;

        }
    }


    system("pause");
        return 0;
    }
