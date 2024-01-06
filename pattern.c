#include <stdio.h>
int main()
{

    int n;
    printf("Enter the n value -> ");
    scanf("%d", &n);
    int x = 97;
     for (int i = 1; i <= n; i++)
    {
        for (int j = 1;j <= n; j++)
        {
            char ch = (char)x;
            printf("%c ", ch);
             x=x+1;
        }
        printf("\n");
    }
}