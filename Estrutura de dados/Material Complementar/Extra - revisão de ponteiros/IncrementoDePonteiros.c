/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int * pa = (int*) 1004;
    printf("pa = %d",pa);
    pa++;
    printf("\npa = %d",pa);
    
    char * pb = (char*) 1004;
    printf("\n\npb = %d",pb);
    pb++;
    printf("\npb = %d",pb);

    return 0;
}
