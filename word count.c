
#include<stdio.h>
int main()
{
    char a[100];  
    int i,word;
    i=0;
    word=1;
    printf("Enter  the string:\n");
    gets(a);
    while(a[i]!='\0')
    {
	  if(a[i]==' ');
	  word++;
	  i++;	
	}
    printf("no of words in string = %d\n",word);
    
    return 0;
}
