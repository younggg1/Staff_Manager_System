//
// Created by Quagmire on 2024/8/6.
//

#ifndef STAFF_MANAGER_SYSTEM_EMPLOYEE_H
#define STAFF_MANAGER_SYSTEM_EMPLOYEE_H

#endif //STAFF_MANAGER_SYSTEM_EMPLOYEE_H
#pragma once
#include<iostream>
using namespace std;
#include "worker.h"

//员工类
class Employee :public Worker
{
public:

    //构造函数
    Employee(int id, string name, int dId);

    //显示个人信息
    virtual void showInfo();

    //获取职工岗位名称
    virtual string getDeptName();
};