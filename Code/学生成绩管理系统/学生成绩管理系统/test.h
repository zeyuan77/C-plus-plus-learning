//�������� ��ͷ�ļ� �������� �궨�� �ṹ��
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>

// ѧ����Ϣ
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

//�ɼ�����ϵͳ
typedef struct scoresys
{
	student* data;
	int count;
	int capacity;

}scoresys;

int initialize_sys(scoresys*ps);//��ʼ��+��ȡ����+��ʼ���ռ�
void addstu(scoresys*ps);//����ѧ����Ϣ
void delstu(scoresys* ps);//ɾ��ѧ����Ϣ
void searchstu(scoresys* ps);//��ѯѧ����Ϣ
void showstu(const scoresys* ps);//չʾѧ����Ϣ
void modifystu(scoresys* ps);//�޸�ѧ����Ϣ
void stusort(scoresys* ps);//����
void memorycyc(scoresys* ps);//���ٿռ�
void loadStudentsFromFile(scoresys* ps);//���ļ��ж�ȡѧ������
void saveStudentsToFile(scoresys* ps);//����ѧ�����ݵ��ļ�