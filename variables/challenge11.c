/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    
int L,l,C;

    printf("donner un valeur au langueur de votre rectangle \n");
    scanf("%d",&L);
    printf("donner un valeur au largeur de votre rectangle \n");
    scanf("%d",&l);
                   C= 2*(L+l);
    printf("la circonférence C de votre  rectangle est %d \n ",C);

    return 0;
}


