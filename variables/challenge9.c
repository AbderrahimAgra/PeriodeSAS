/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
int main()
{  
    
          int x1,x2,y1,y2,FG;
          
       printf("determiner x1 de votre point de depart F \n");
    scanf("%d",&x1);
    
       printf("determiner y1 de votre point de depart F \n");
    scanf("%d",&y1);
    
       printf("determiner x2 de votre point d'arret G \n"); 
    scanf("%d",&x2);  
       printf("determiner y2 de votre point d'arret G \n");
    scanf("%d",&y2); 
    
            
            FG=sqrt(pow( x2-x1, 2) + pow( y2-y1, 2));
       
 printf("la distance entre F et G est:%d \n",FG);
  

    return 0;
}






