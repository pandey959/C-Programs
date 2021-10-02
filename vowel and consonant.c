#include<stdio.h>
int main()
{
    char c;
    printf("Please Enter A Chracter:");
    scanf("%c", &c);
    // switch (c)
    // {
    // case 'a':
    //     printf("The Chracter is Vowel");
    //     break;
    // case 'e':
    //     printf("The Chracter is Vowel");
    //     break;
    // case 'i':
    //     printf("The Chracter is Vowel");
    //     break;
    // case 'o':
    //     printf("The Chracter is Vowel");
    //     break;
    // case 'u':
    //     printf("The Chracter is Vowel");
    //     break;
    // case 'A':
    //     printf("The Chracter is Vowel");
    //     break;
    // case 'E':
    //     printf("The Chracter is Vowel");
    //     break;
    // case 'I':
    //     printf("The Chracter is Vowel");
    //     break;
    // case 'O':
    //     printf("The Chracter is Vowel");
    //     break;
    // case 'U':
    //     printf("The Chracter is Vowel");
    //     break;
    
    // default:
    // printf("The Chracter Is Consonant");
    //     break;
    // }

    if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O'|| c=='U')
    {
        printf("The Chracter %c Is Vowel.", c);
    }
    else{
        printf("The Chracter %c Is Consonant", c);
    }
    
    return 0;
}
