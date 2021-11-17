#include <stdio.h>
#include <math.h>

int main ()
{
    int a,b,c;
    float delta;

    printf("votre equation deuxieme degre s'ecrit sous la forme suivant: \n");
    printf("ax^2+bx+c=0 \n");
    printf(" saisir votre trois entier a b et c \n");
    scanf("%d %d %d",&a,&b,&c);
    delta=pow(b,2)-4*a*c;
    if (a==0 && b==0 && c==0)
    {
        printf("tout reel est une solution \n");
        
    }
    else if (a==0 && b==0)
    {
        printf("cette equation n'as pas de solution \n");
    }
    else if (a==0)
    {
        printf("cette equation est de premier degre %.2f \n ", -(double)c/b);
    }
    else if (delta==0)
    {
        printf("votre equation possed une seul solution %.2f  \n",-(double)b/(2*a));

    }


    else if (delta > 0)
    {
        printf("votre equation possed deus solution X1 ET X2 \n");
        printf("X1 %.2f",(-b-sqrt(delta))/(2*a));
        printf("X2 %.2f",(-b+sqrt(delta))/(2*a));

    }
    else 
    {
        printf("votre equation ne possed aucun solution en R");
    }
    return 0;
}