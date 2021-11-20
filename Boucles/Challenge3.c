#include <stdio.h>

/*Ecrire un programme C qui lit un entier puis détermine s'il est premier ou non.
On rappelle qu'un entier est dit premier s'il a exactement deux diviseurs différents; 1 et lui-même.
Ex: 2, 3, 7, 17, 101 sont tous premiers, et 4, 10, 27 ne le sont pas.*/
int main()
{
    int nmbr,ok=1 ;
    printf("ce programe nous permet de determiner si votre nombre saisir est premier ou non\n");
    printf("\t saisir votre nombre : \n \t");
    scanf("%d",&nmbr);
    for ( int i = 2; i < nmbr; i++)
    {
        //printf("\n la valeur de i est %d",i);
        if(nmbr % i == 0){ 
            ok=0 ;
            break;
        }
    }
    if (ok == 1)
    {
                    printf("\t votre nombre est premier ");
    }else{
                    printf("\t votre nombre n'est pas premier ");

    }
    
    
    
    return 0;
}
