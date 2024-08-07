//
// Created by Quagmire on 2024/8/7.
//

#ifndef STAFF_MANAGER_SYSTEM_USERLOGIN_H
#define STAFF_MANAGER_SYSTEM_USERLOGIN_H
#include <unordered_map>
#include <iostream>
#include <fstream>
#include <string>
#include <unordered_map>
using namespace std;

class UserManager {
public:
    UserManager(const string& filename) : filename(filename) {
        loadUsers();
    }

    void registerUser() {
        string username, password;
        cout << "输入用户名: ";
        cin >> username;
        cout << "输入密码: ";
        cin >> password;

        if (users.find(username) != users.end()) {
            cout << "用户名已存在请重试" << endl;
        } else {
            users[username] = password;
            saveUsers();
            cout << "注册成功" << endl;
        }
    }

    bool loginUser() {
        string username, password;
        cout << "输入用户名: ";
        cin >> username;
        cout << "输入密码: ";
        cin >> password;

        if (users.find(username) != users.end() && users[username] == password) {
            cout << "登录成功!" << endl;
            return true;
        } else {
            cout << "用户名或密码错误" << endl;
            return false;
        }
    }

private:
    string filename;  // 存储用户数据的文件名
    unordered_map<string, string> users;  // 存储用户名和密码的哈希表

// 从文件中加载用户数据
    void loadUsers() {
        ifstream file(filename);  // 打开文件进行读取
        if (file.is_open()) {  // 如果文件成功打开
            string username, password;
            // 逐行读取用户名和密码
            while (file >> username >> password) {
                users[username] = password;  // 将用户名和密码存储在哈希表中
            }
            file.close();  // 关闭文件
        }
    }

// 将用户数据保存到文件中
    void saveUsers() {
        ofstream file(filename);  // 打开文件进行写入
        if (file.is_open()) {  // 如果文件成功打开
            // 遍历哈希表中的所有用户
            for (const auto& pair : users) {
                file << pair.first << " " << pair.second << endl;  // 将用户名和密码写入文件
            }
            file.close();
        }
    }

};
#endif //STAFF_MANAGER_SYSTEM_USERLOGIN_H
