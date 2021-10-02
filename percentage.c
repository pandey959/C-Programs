#include <stdio.h>
int main()
{
    int a, b, c, d, e, sum;
    float percentage;
    printf("Enter Marks in 5 Subjects:\n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    sum = a + b + c + d + e;
    printf("The Total Marks Is: %d", sum);
    percentage = sum / 5;
    printf("\nThe Percentage Is: %f", percentage);
    if (percentage > 90)
    {
        printf("\nGrade Is A+");
    }
    else if (percentage > 80)
    {
        printf("\nGrade Is A");
    }

    else if (percentage > 70)
    {
        printf("\nGrade Is B+");
    }

    else if (percentage > 60)
    {
        printf("\nGrade Is B");
    }

    else if (percentage > 50)
    {
        printf("\nGrade Is C+");
    }

    else if (percentage > 40)
    {
        printf("\nGrade Is C");
    }

    else if (percentage > 30)
    {
        printf("\nGrade Is D+");
    }
    else
    {
        printf("\nYou're Failed");
    }

    return 0;
}
