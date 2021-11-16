#include <stdio.h>

int main()
{
    float F,C;
    printf("Ecrivez votre température en Fahrenheit\n");
    scanf("%f",& F);
    C=(F-32)*(9/5);
    if(C<12){
        printf("il fait trés froid .votre temperateur en Celsius est: %f",C);
    }else if (C>12 && C<25){
        printf("il fait  froid .votre temperateur en Celsius est: %f",C);
    }else if (C>25 && C<32){
        printf("il fait  chaud .votre temperateur en Celsius est: %f",C);
    }else if (C>32){
        printf("il fait trés chaud .votre temperateur en Celsius est: %f",C);
    }
    else{
        printf("error 404");
    }
    
    
    

    return 0;
}
