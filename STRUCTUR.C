#include<stdio.h>
#include<conio.h>
struct student
{
	int rollno;
	char name[30];
	char department[40];
};
int main()
{
	struct student s;
	clrscr();
	printf("Enter the information of students");
	printf("Enter roll no");
	scanf("%d",&s.rollno);
	printf("Enter the name");
	scanf("%c",&s.name);
	printf("Enter department");
	scanf("%c",&s.department);
	printf("Showing the details you entered");
	printf("Roll No : %d",s.rollno);
	printf("Name : %c",s.name);
	printf("Department: %c",s.department);
	getch();
	return 0;
}