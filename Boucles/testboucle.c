#include <stdio.h>
int main()
{
    int n;
    int X = 1;
    while (X <= 3 )
    {
        printf("Donnee le nombre des jours d'annee: \n");
        scanf("%d",&n);
        if (n==365)
        {
            printf("vous aver la bonne reponce \n");
        }
        else
        {
            printf("FAUX il vous rest %d choix \n", 3-X );
        }
        X++;

    }
 return 0;   
}