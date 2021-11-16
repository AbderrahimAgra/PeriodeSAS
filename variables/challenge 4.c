#include <stdio.h>

int main()
{
    float mile ,metre ;
    
    printf("ecriver votre distance en mile :\n");
    scanf("%f",&mile);
    metre = mile/1609;
    printf("votre distance en metre est %f", metre);
    

    return 0;
}