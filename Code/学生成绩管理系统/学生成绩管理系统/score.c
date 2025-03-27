//����
#define  _CRT_SECURE_NO_WARNINGS 
#include"test.h"
void capacityappend(scoresys* ps)
{
	if (ps->capacity == ps->count)
	{
		student* p = (student*)realloc(ps->data, (ps->capacity + 2) * sizeof(student));//��̬�ڴ����
		if (p == NULL)
		{
			printf("Error");
			return;
		}
		else
		{
			ps->data = p;
			ps->capacity += 2;
			printf("Successfully append\n");
		}
	}

}
void loadStudentsFromFile(scoresys* ps)
{
	assert(ps);
	FILE* file = fopen("students.txt", "r");
	if (file == NULL)
	{
		printf("Error");
		return;
	}
	while (fscanf(file, "%s %s %d %f %f %f %f\n", ps->data[ps->count].name,ps->data[ps->count].sex,
		&ps->data[ps->count].id, &ps->data[ps->count].math,&ps->data[ps->count].English,&ps->data[ps->count].C_language,
		&ps->data[ps->count].score) != EOF)
	{
		ps->count++;
		capacityappend(ps);
	}
	fclose(file);
	file = NULL;
	
}
int initialize_sys(scoresys* ps)
{
	assert(ps);
	ps->count = 0;
	ps->data = (student*)calloc(3,sizeof(student));
	if (ps->data == NULL)
	{
		printf("error");
		return 1;
	}
	ps->capacity = 3;
	loadStudentsFromFile(ps);
	return 0;
}
void forsum(scoresys* ps)
{
	ps->data[ps->count].score=(ps->data[ps->count].English + ps->data[ps->count].math + ps->data[ps->count].C_language) / 3.0;
}


void addstu(scoresys *ps)
{
	assert(ps);
	capacityappend(ps);
	printf("����������:>");
	scanf("%s", ps->data[ps->count].name);
	printf("�������Ա�:>");
	scanf("%s", ps->data[ps->count].sex);
	printf("������ѧ��:>");
	scanf("%d", &ps->data[ps->count].id);
	printf("��������ѧ�ɼ�:>");
	scanf("%f", &ps->data[ps->count].math);
	printf("������Ӣ��ɼ�:>");
	scanf("%f", &ps->data[ps->count].English);
	printf("������C���Գɼ�:>");
	scanf("%f", &ps->data[ps->count].C_language);
	forsum(ps);
	
	ps->count++;
	printf("Successfully add\n");
}
static int findStuByname(scoresys* ps, char name[])
{
	assert(ps);
	int i = 0;
	for (i = 0; i < ps->count; i++)
	{
		if (0 == strcmp(ps->data[i].name, name))
		{
			return i;
		}
	}
	return -1;
}
void delstu(scoresys* ps)
{
	assert(ps);
	int i = 0;
	int flag = 0;
	int j = 0;
	if (ps->count == 0)
	{
		printf("�������޷�ɾ��");
		return;
	}
	int id;
	printf("��������Ҫɾ����ѧ��ѧ��:>");
	scanf("%d", &id);
	for (i = 0; i < ps->count; i++)
	{
		if (ps->data[i].id == id)
		{
			flag = 1;
		}
	}
	for (j = i; j < ps->count; j++)
	{
		ps->data[j] = ps->data[j + 1];
	}
	ps->count--;
	if (flag == 1)
	{
		printf("Successfully delete\n");
	}
	else
		printf("ɾ��ʧ��\n");
}
void searchstu(scoresys* ps)
{
	assert(ps);
	char name[20];
	printf("�����������ѯ��ѧ������:>");
	scanf("%s", name);
	int pos = -1;
	pos = findStuByname(ps, name);
	if (pos ==-1)
	{
		printf("Ҫ���ҵ�ѧ��������");
		return;
	}
	else
	{
		printf("%-10s\t%-6s\t%-10d\t%-10f\t%-10f\t%-10f\t%-10f\\n", ps->data[pos].name, ps->data[pos].sex, ps->data[pos].id, ps->data[pos].math
		,ps->data[pos].English,ps->data[pos].C_language,ps->data[pos].score);
	}
}

void showstu(const scoresys* ps)
{
	assert(ps);
	int i = 0;
	printf("name\t\tsex\tid\t\tmath\t\tEnglish\t\tC_language\tscore\n");
	for (i = 0; i < ps->count; i++)
	{
		printf("%-10s\t%-6s\t%-10d\t%-10f\t%-10f\t%-10f\t%-10f\n", ps->data[i].name, ps->data[i].sex, ps->data[i].id, ps->data[i].math
		,ps->data[i].English,ps->data[i].C_language,ps->data[i].score);
	}

}
void modifystu(scoresys* ps)
{
	assert(ps);
	char name[20];
	printf("�����������޸ĵ�ѧ������:>");
	scanf("%s", name);
	int pos = -1;
	pos = findStuByname(ps, name);
	if (pos == -1)
	{
		printf("Ҫ�޸ĵ�ѧ��������");
		return;
	}
	printf("���ҵ���Ҫ�޸ĵ�ѧ��\n");
	printf("����������:>");
	scanf("%s", ps->data[pos].name);
	printf("�������Ա�:>");
	scanf("%s", ps->data[pos].sex);
	printf("������ѧ��:>");
	scanf("%d", &ps->data[pos].id);
	printf("��������ѧ�ɼ�:>");
	scanf("%f", &ps->data[pos].math);
	printf("������Ӣ��ɼ�:>");
	scanf("%f", &ps->data[pos].English);
	printf("������C���Գɼ�:>");
	scanf("%f", &ps->data[pos].C_language);
	forsum(ps);
	printf("Successfully modify\n");
}
void sortmenu()
{
	printf("**********     sortmethods  **************\n");
	printf("********** 1.sortbyscore	**************\n");
	printf("********** 2.sortbymath     **************\n");
	printf("********** 3.sortbyEnglish   *************\n");
	printf("********** 4.sortbyC         *************\n");
	printf("*****************************************\n");
}
int cmpByscore(const void* e1, const void* e2)
{
	float flag=((student*)e1)->score - ((student*)e2)->score;
	if (flag > 0)
	{
		return -1;
	}
	else
		return 1;
}
int cmpBymath(const void* e1, const void* e2)
{
	float flag = ((student*)e1)->math - ((student*)e2)->math;
	if (flag > 0)
	{
		return -1;
	}
	else
		return 1;
}
int cmpByEnglish(const void* e1, const void* e2)
{
	float flag = ((student*)e1)->English - ((student*)e2)->English;
	if (flag > 0)
	{
		return -1;
	}
	else
		return 1;
}
int cmpByC(const void* e1, const void* e2)
{
	float flag = ((student*)e1)->C_language - ((student*)e2)->C_language;
	if (flag > 0)
	{
		return -1;
	}
	else
		return 1;
}

void stusort(scoresys* ps)
{
	assert(ps);
	int input = 0;
	printf("��ѡ���������ʽ��\n");
	sortmenu();
	scanf("%d", &input);
	switch (input)
	{
	  case 1:
		  qsort(ps->data, ps->count, sizeof(student), cmpByscore);
		  printf("Successfully sorted\n");
		  break;
	  case 2:
		  qsort(ps->data, ps->count, sizeof(student), cmpBymath);
		  printf("Successfully sorted\n");
		  break;
	  case 3:
		  qsort(ps->data, ps->count, sizeof(student), cmpByEnglish);
		  printf("Successfully sorted\n");
		  break;
	  case 4:
		  qsort(ps->data, ps->count, sizeof(student), cmpByC);
		  printf("Successfully sorted\n");
		  break;
	  default:printf("ȡ������\n");
		  break;

	}

}
void memorycyc(scoresys* ps)
{
	assert(ps);
	free(ps->data);
	ps->data = NULL;
}

void saveStudentsToFile(scoresys* ps)
{
	assert(ps);
	FILE* file = fopen("students.txt", "w");
	if (file == NULL)
	{
		printf("Error");
		return;
	}
	int i = 0;
	for (i = 0; i < ps->count; i++)
	{
		fprintf(file, "%s %s %d %f %f %f %f\n", ps->data[i].name, ps->data[i].sex,
			ps->data[i].id, ps->data[i].math, ps->data[i].English, ps->data[i].C_language,
			ps->data[i].score);
	}
	fclose(file);
	file = NULL;
	
}