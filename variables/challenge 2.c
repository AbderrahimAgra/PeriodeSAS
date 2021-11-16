#include <stdio.h>
int main()
{
    float F , C ;   
    
    printf("ecriver votre température en en fahrenheit: \n");
    scanf("%f",&F );
    
    C = (F-32)/1.8;
    printf ("voici votre température en celecieuse %f", C);

    return 0;
}
