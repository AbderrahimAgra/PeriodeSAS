/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b,c,NbrInv,Entier;
    printf("le but est d'afficher un nombre entier de trois chiffres \n");
    printf("donner la valeur de premier chifre a \n");
           scanf("%d",&a);
    printf("donner la valeur de deuxieme chifre b \n");
           scanf("%d",&b);
    printf("donner la valeur de troisieme chifre c \n");
           scanf("%d",&c);
    printf("voici votre nombre entier sisaire %d%d%d \n",a,b,c);       
    printf("voici votre chaine inversé %d%d%d \n",c,b,a);
    return 0;
}

