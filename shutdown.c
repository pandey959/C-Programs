#include<stdio.h>
#include<stdlib.h>

int main()
{
  char ch;  
    printf("Do you want to shutdown your pc now (y/n)?");
    scanf("%c", &ch);
    if(ch == 'yes'|| ch == 'YES' || ch =='y' || ch =='Y')
    {
      system("C:\\WINDOWS\\System32\\shutdown /s");
    }
    printf("\n\n\t\t\SEE YOU SOON !\n\n\n");
    return 0;
}
