#include <stdio.h>
int main(int argc, char const *argv[])
{
    char ch;
    printf("enter character ");
    scanf("%c",&ch);
    if((ch>='a' && ch<= 'z') || (ch>= 'A' && ch<= 'Z')) 
    {
     switch(ch)
     {
        case'A':
        printf("Vowel\n");
        break;
        case'E':
        printf("Vowel\n");
        break;
        case'I':
        printf("Vowel\n");
        break;
        case'O':
        printf("Vowel\n");
        break;
        case'U':
        printf("Vowel\n");
        break;
        case'a':
        printf("Vowel\n");
        break;
        case'e':
        printf("Vowel\n");
        break;
        case'i':
        printf("Vowel\n");
        break;
        case'o':
        printf("Vowel\n");
        break;
        case'u':
        printf("Vowel\n");
         break;
     default:
     printf("%c consnant",ch);}
    }
    else{
        printf("%c is not an alphabet",ch);
    } 
    return 0;
}