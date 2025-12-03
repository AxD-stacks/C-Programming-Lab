#include<stdio.h>
int main()
{
    char  i;
    for(i='A';i<='Z'; i++)
    {
        printf("%c\n", i);
        switch(i)
        {
            case'A':
                printf("A is a vowel\n");
                break;
            case'E':
                printf("E is a vowel\n");
                break;
            case'I':
                printf("I is a vowel\n");
                break; 
            case'O':
                printf("O is a vowel\n");
                break;    
            case'U':
                printf("U is a vowel\n");
                break;
            default:
                printf("%c is a consonant\n", i);
        }
    }
    return 0;
}