#include <stdio.h>
int main()
{
    char c;
    printf("un programme pour verifier si  \n le caractere donne est un alphabet majuscule ou non. \n");
    printf("sisaire votre charactere\n");
    scanf("%c",&c);
    int n= ( int ) c;
    if (n>=65 && n <= 90)
    {
        printf("le caractere donne est un alphabet majuscule ");
    }
    else
    {
        printf("le caractere donne est un alphabet minuscule ");
    }
}