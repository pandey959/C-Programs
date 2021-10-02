#include<stdio.h>
struct student
{
    char name[30];
    int roll_no;
    char favChar;
    char address[40];
};
int main()
{
    struct student s1;

    printf("\nEnter Student Name:\n");
	gets(name);
    printf("Enter Student Roll No.:\n");
    scanf("%d", &s1.roll_no);

    printf("Enter Student Favourate Chracter:\n");
    scanf(" %c", &s1.favChar);

    printf("Enter Student Address:\n");
    scanf("%s", &s1.address);


    printf("\n\n\n\tThe Student Name Is:%s", s1.name);
    printf("\n\tThe Student Roll No. Is:%d", s1.roll_no);
    printf("\n\tThe Student Favourate Chracter Is:%c", s1.favChar);
    printf("\n\tThe Student Address Is:%s", s1.address);

    return 0;
}
