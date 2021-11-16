
#include <stdio.h>
int main()
{
        int x,y,S;
       
    printf("donner un valeur a x \n ");
    scanf("%d",&x);
    printf("donner un valeur a y \n") ;
    scanf("%d",&y);
    if (x==y)
    {
        printf("vous deux valeurs sont identiques est %d \n",S=3*(x+y) );
    }
    else
    {
        printf("la somme de deux valeurs entieres donnees est %d \n",S=x+y);
    }  
    return 0;
}