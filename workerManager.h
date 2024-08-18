#pragma once
#include<iostream>
#include"worker.h"
#include"employee.h"
#include"manager.h"
#include"boss.h"
#include<fstream>
#define FILENAME "empFile.txt"

using namespace std;

class WorkerManager
{
public:
    WorkerManager();

    void show_Menu();

    void ExitSystem();

    void Add_Emp();

    void save();
    bool m_FileIsEmpty;
    int get_EmpNum();
    void init_Emp();
    void Show_Emp();
    void Del_Emp();
    int IsExist(int id);
    void Mod_Emp();
    void Find_Emp();
    void Sort_Emp();
    void Clean_File();
    int m_EmpNum;
    Worker ** m_EmpArray;
    ~WorkerManager();
};

//#pragma once  防止头文件重复包含