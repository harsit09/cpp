
#include <stdio.h>

int main()
{
    char ch;
    printf("\nenter the alphabet : ");
    scanf("%c",&ch);
    switch (ch)
    {
        case 'A': case 'E' : case'I' :case 'O' :case 'U' : case 'a' : case'e': case'i': case'o': case'u':
        printf("\n it's a vowel");
        break;
        default:
        printf("it's a consonant");
        
    }

    return 0;
}
