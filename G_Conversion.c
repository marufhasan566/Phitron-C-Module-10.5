#include <stdio.h>
#include <string.h>
int main()
{
    char c[100000];
    scanf("%s", c);
    // printf("%d", strlen(c));
    for (int i = 0; i < strlen(c); i++)
    {
        if (c[i] == ',')
        {
            printf("%d ", i);
        }
        // printf("%c", c[i]);
    }

    // printf("%s", c);
    return 0;
}