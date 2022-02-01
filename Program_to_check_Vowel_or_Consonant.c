#include<stdio.h>
int main()
{
    char ch;
    char uppercase,lowercase;
    scanf("%c",&ch);
    uppercase = (ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');
    lowercase = (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
    if (uppercase||lowercase)
         printf("Vowel");
    else
         printf("Consonant");
    return 0;
}
