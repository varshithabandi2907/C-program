/* write a code to check whether the given char is an vowel consonent or non alphabet by using if */
#include<stdio.h>
int main()
{
    char ch;
    printf("enter a single character\n");
    scanf(" %c",&ch);
    if ((ch>='a' && ch<='z' || ch>='A' && ch<='Z'))
    {
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        {
            printf("vowel \n");
        }
        else
        {
            printf("consonant\n");
        }
    }
    else
    {
        printf("non-alphabets");
    }
    
    return 0;
}
