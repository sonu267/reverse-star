#include <stdio.h>
int main()
{
    int n,m;
    printf("enter number: ");
    scanf("%d", &n);
    // printf("enter number: ");
    // scanf("%d", &m);
    for (int i = 1; i <=n; i++)
    {
         for (int k = n; k >=i; k--)
    {
        printf("*");
    }
        printf("\n");
    }

   
    
    

    return 0;
}