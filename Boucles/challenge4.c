

/* Ecrire un programme C qui lit une série d'entiers positifs inférieurs à 100 terminée par 0.
Et qui doit négliger toute entrée strictement supérieure à 100.
Puis calcule et affiche la somme et le max des éléments de cette série.*/
#include<stdio.h>
int main()

{

int somme,max,a;

somme=0;

max=0;

a=1;

printf("Entrez une serie d'entier, pour finir entrez 0.\n");

while(a!=0)

{

do{

scanf("%d",&a);

if(a>100) printf("Entrez SVP un entier inferieur ou egal a 100\n");

}
while(a>100);

somme+=a;

if(a>max) max=a;

}

printf("la somme: %d\n",somme);

printf("le max: %d\n",max);

system("pause");

return 0;


    
}