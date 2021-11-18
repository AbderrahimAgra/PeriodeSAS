#include <stdio.h>
int main ()
{
    int n,mois,jours,h,min,s;


        printf("ce programe nous permet de convertir une nmbrd'Annee! \n");
        printf("sisair le nombre des annees a convertire \n");
        scanf("%d",&n);
        
        mois=n*12;
        jours=n*365;
        h=jours*24;
        min=h*60;
        s=min*60;
        printf("voici votre resuultat \n");
        printf("mois= %d \n jours= %d \n heur= %d \n min= %d \n s= %d \n ",mois,jours,h,min,s);


    return 0;
}   