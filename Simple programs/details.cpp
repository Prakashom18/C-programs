#include<stdio.h>
int main(){
	char name[20];
	int age;
	float salary;
	puts("Enter the full name");
	gets(name);
	printf("Enter the age");
	scanf("%d",&age);
	printf("Enter the salary");
	scanf("%f",&salary);
	printf("Name=%s",name);
	printf("\n Age is %d\n Salary is %f",age,salary);
	return 0;
}
	
