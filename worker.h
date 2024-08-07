//
// Created by Quagmire on 2024/8/6.
//

#ifndef STAFF_MANAGER_SYSTEM_WORKER_H
#define STAFF_MANAGER_SYSTEM_WORKER_H

#endif //STAFF_MANAGER_SYSTEM_WORKER_H
#pragma once
#include<iostream>
#include<string>
using namespace std;

//职工抽象基类
class Worker
{
public:

    //显示个人信息
    virtual void showInfo() = 0;
    //获取岗位名称
    virtual string getDeptName() = 0;

    int m_Id; //职工编号
    string m_Name; //职工姓名
    int m_DeptId; //职工所在部门名称编号
};