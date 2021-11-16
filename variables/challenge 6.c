#include <stdio.h>

int main()
{
    float F, C ;
    printf("ecrivez votre température en Fahrenheit\n");
    scanf("%f",&F);
      C =(F-32)/1.8;
    printf ("voici votre température en celsius %f",C );  
    return 0;
}
