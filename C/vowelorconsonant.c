#include<stdio.h>
int main(int argc, char const *argv[])
{
    char ch ,lowercase_vowel,uppercase_vowel;
     printf("enter Char :-");
    scanf("%c",&ch);
    lowercase_vowel = ( ch == 'a'|| ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    uppercase_vowel = ( ch == 'A'|| ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
    if (lowercase_vowel || uppercase_vowel)
    {
        printf("%c is vowel",ch);
    }
    else
    printf("%c is consonant",ch);

    return 0;
}
