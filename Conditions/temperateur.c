#include <stdio.h>
int main()
{
    int F,C;    
    printf("saisir votre temperature en Fahrenheit\n");
    scanf("%d",&F);
            C=(F-32)/1.8;
    printf("votre temperature  en Celsius est %d \n",C);

    return 0;
}
