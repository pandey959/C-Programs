#include<stdio.h>
struct student{
	char name[30];
	int roll_no;
	char address[40];
	int mark;
};
int main(){
	struct student s1;
	printf("Enter Student Name:");
	scanf("%s", &s1.name);
	printf("Enter Student Roll No.:");
	scanf("%d", &s1.roll_no);
	printf("Enter Student Address:");
	scanf("%s", &s1.address);
	printf("Enter Student Mark:");
	scanf("%d", &s1.mark);
	
	printf("\nThe Name Of Student Is: %s", s1.name);
	printf("\nThe Roll No. Of Student Is: %d", s1.roll_no);
	printf("\nThe Address Of Student Is: %s", s1.address);
	printf("\nThe Mark Of Student Is: %d", s1.mark);
	
	return 0;
	
	
}