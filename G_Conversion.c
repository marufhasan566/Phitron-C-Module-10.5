#include <stdio.h>
#include <string.h>
int main()
{
    char c[100000];
    scanf("%s", c);
    // printf("%d", strlen(c));
    for (int i = 0; i < strlen(c); i++)
    {
        if (c[i] >= 'A' && c[i] <= 'Z')
        {
            printf("%c", c[i] + 32);
        }
        if (c[i] >= 'a' && c[i] <= 'z')
        {
            printf("%c", c[i] - 32);
        }
        if (c[i] == ',')
        {
            printf(" ");
        }
        // printf("%c", c[i]);
    }

    // printf("%s", c);
    return 0;
}