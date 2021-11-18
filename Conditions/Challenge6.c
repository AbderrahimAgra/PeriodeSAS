#include <stdio.h>
int main ()
{
    int x,n,mois,jours,h,min,s;


        printf("ce programe nous permet de convertir une nmbrd'Annee! \n");
        printf("sisair le nombre des annees a convertire \n");
        scanf("%d",&n);
        printf("coisire le nombre equivalent au votre choix \n");
        printf("1 mois \n 2 jours \n 3 heure \n 4 minute \n 5 second \n");
        scanf("%d",&x);
        mois=n*12;
        jours=n*365;
        h=jours*24;
        min=h*60;
        s=min*60;
       
        switch (x)
        {
        case 1:
            printf("voici votre resultat %d \n",mois);
         break;
         case 2:
            printf("voici votre resultat %d \n",jours);
         break;
         case 3:
            printf("voici votre resultat %d \n",h);
         break;
         case 4:
            printf("voici votre resultat %d \n",min);
         break;
         case 5:
            printf("voici votre resultat %d \n",s);
         break;
        
        default:
            break;
        }
        


    return 0;
}   
