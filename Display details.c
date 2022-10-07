#include<stdio.h>
#include<conio.h>
struct person {
    char name[50], address[50];
    int age;
};

void main() 
{
	struct person s[100];
    int i;
    printf("\t\tEnter information of students\n");

    // storing information
    for (i = 0; i<15;i++) 
	{
        printf("Enter name: ");
        fflush(stdin);
        gets(s[i].name);
        printf("Enter address: ");
        gets(s[i].address);
        printf("Enter age:");
        scanf("%d",&s[i].age);
        printf("\n");
    }
    printf("\t\t\"Displaying Information\"\n\n");

    // displaying information
    for (i = 0; i <15; i++) 
	{
        printf("%d)Name: %s, Address: %s, Age: %d\n",i+1,
		s[i].name,s[i].address,s[i].age);
        printf("\n");
    }
    getch();
}

