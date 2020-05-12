# include <stdio.h>
# include <string.h>
# include <Windows.h>
struct AGE
{
    int year;
    int month;
    int day;
};


struct STUDENT
{
    char name[20];  //姓名
    int num;  //学号
    struct AGE birthday;  //生日
    float score;  //分数
};


int main()
{
	struct STUDENT student1[5];
	struct STUDENT* p =	NULL;
	p = &student1[1];
	strcpy((p->name),"小明");
	p->birthday.year = 2020;
	(*p).birthday.day = 13;
	(*p).birthday.month = 4;
	p->num = 0316;
	(*p).score = 58.5;
	printf("%s\r\n",p->name);
	printf("%d\r\n",p->birthday.year);
	printf("%d\r\n",(*p).birthday.month);
	printf("%d\r\n",(*p).birthday.day);
	printf("%d\r\n",(*p).num);
	printf("%.1f\r\n",p->score);
	p++;
	strcpy((p->name),"张瑞");
	p->birthday.year = 2018;
	(*p).birthday.day = 23;
	(*p).birthday.month = 4;
	p->num = 0315;
	(*p).score = 69.5;
	printf("%s\r\n",p->name);
	printf("%d\r\n",p->birthday.year);
	printf("%d\r\n",(*p).birthday.month);
	printf("%d\r\n",(*p).birthday.day);
	printf("%d\r\n",(*p).num);
	printf("%.1f\r\n",p->score);
	//system("pause");
	return 0;
}