#define  _CRT_SECURE_NO_WARNINGS 
#include"test.h"


void menu()
{
	printf("********** 学生成绩管理系统 **************\n");
	printf("**********1.add       2.del***************\n");
	printf("**********3.search    4.modify************\n");
	printf("**********5.show      6.sort**************\n");
	printf("**********0.exit      ********************\n");
	printf("******************************************\n");
}
enum option//枚举
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};
int main()
{
	int input = 0;
	scoresys stu;
	initialize_sys(&stu);
	do
	{
		menu();
		printf("choose:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			addstu(&stu);
			break;
		case DEL:
			delstu(&stu);
			break;
		case SEARCH:
			searchstu(&stu);
			break;
		case MODIFY:
			modifystu(&stu);
			break;
		case SHOW:
			showstu(&stu);
			break;
		case SORT:
			stusort(&stu);
			break;
		case EXIT:
			saveStudentsToFile(&stu);
			memorycyc(&stu);
			printf("退出系统\n");
			break;
		default:
			printf("error");
			break;
		}
	} while (input);
	



	return 0;
}