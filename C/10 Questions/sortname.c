#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    char n[50];
    scanf("%s", n);

    int i = 0;
    while (n[i] != '\0')// ye wala loop length nikalne ke liye hai string ka 
    {
        i++;
    }
    printf("%d\n", i);
    for (int j = 0; j < i-1; j++)// ye waala loop string mein travel krne ke liye 
    {
        for (int k = 0; k < i - j - 1; k++) // ye loop swapping ke liye acsending order mein krne ke liye 
        {
            if (n[k] > n[k + 1])
            {
                char temp = n[k];
                n[k] = n[k + 1];
                n[k + 1] = temp;
            }
        }
    }
    printf("%s", n);
    return 0;
}