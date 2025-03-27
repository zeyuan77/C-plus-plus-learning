//类型声明 放头文件 函数声明 宏定义 结构体
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>

// 学生信息
typedef struct s
{
	char name[15];
	char sex[10];
	int id;
	float math;
	float English;
	float C_language;
	float score;
}student;

//成绩管理系统
typedef struct scoresys
{
	student* data;
	int count;
	int capacity;

}scoresys;

int initialize_sys(scoresys*ps);//初始化+读取数据+初始化空间
void addstu(scoresys*ps);//增加学生信息
void delstu(scoresys* ps);//删除学生信息
void searchstu(scoresys* ps);//查询学生信息
void showstu(const scoresys* ps);//展示学生信息
void modifystu(scoresys* ps);//修改学生信息
void stusort(scoresys* ps);//排序
void memorycyc(scoresys* ps);//销毁空间
void loadStudentsFromFile(scoresys* ps);//从文件中读取学生数据
void saveStudentsToFile(scoresys* ps);//保存学生数据到文件