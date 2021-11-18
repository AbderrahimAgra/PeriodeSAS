#include <stdio.h>
int main()
{
    int n;
    printf("ce programme est pour verifier si le nombre donnee est positif, negatif ou nul \n");
    printf("saisir votre nombre \n nombre= ");
    scanf("%d",&n);
    if(n<0)
    {
        printf("votre nombre est negatif");
    } 
	else if(n>0)
    {
        printf("votre nombre est positif");
    }
    else
    {
        printf("votre nomre est nul");
    }
    return 0;
}
