#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a;
    int b;
    
    printf("enter the bunja : ");
    scanf("%d", &a);
    
    printf("enter the bunmo : ");
    scanf("%d", &b);
    
    printf("result : %f\n", (float) a/b);
    
    system("PAUSE");	
    return 0;
}
