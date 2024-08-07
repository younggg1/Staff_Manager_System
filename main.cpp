#include<iostream>
using namespace std;
#include "workerManager.h"
#include "userLogin.h"

int main() {
    UserManager userManager("users.txt");
    int loginChoice;
    while (true) {
        cout << "1-注册\n2-登录\n3-退出\n请选择: ";
        cin >> loginChoice;
        switch (loginChoice) {
            case 1:
                userManager.registerUser();
                break;
            case 2:
                if (userManager.loginUser()){
                    WorkerManager wm;
                    int choice = 0;
                    while (true)
                    {
                        //展示菜单
                        wm.Show_Menu();
                        cout << "请输入您的选择:" << endl;
                        cin >> choice;

                        switch (choice)
                        {
                            case 0: wm.exitSystem();//退出系统
                                break;
                            case 1: wm.Add_Emp();//添加职工
                                break;
                            case 2: wm.Show_Emp();//显示职工
                                break;
                            case 3: wm.Del_Emp();//删除职工
                                break;
                            case 4: wm.Mod_Emp();//修改职工
                                break;
                            case 5: wm.Find_Emp();//查找职工
                                break;
                            case 6: wm.Sort_Emp();//排序职工
                                break;
                            case 7: wm.Clean_File();//清空文件
                                break;
                            default:
                                system("cls");
                                break;
                        }
                    }

                }
                break;

            case 3:
                return 0;
            default:
                cout << "输入有误，请重新输入." << endl;
        }
    }






    return 0;
}