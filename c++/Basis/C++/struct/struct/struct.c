#include <iostream>
uging namespace std;


struct Student
{
	char name[100];
	int age;
};

int main(int argc, char *argv[])
{
	Student s1 = { "wang", 1 };
	Student s2 = { "wang2", 2 };
	return 0;
}
